#include <stdio.h>
#include <stdlib.h>

int main () { 
    int *p; 
    int s = 2; 

    printf("%d\n", s)    ; 
    printf("%p\n", &s)    ; 
    p = &s; 
    printf("%p\n", p);
    printf("%d\n", p);
    printf("%d\n", *p);


    return 0; 
}