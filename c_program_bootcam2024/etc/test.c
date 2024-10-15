#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 2; 
    int b = 3; 

    int temp = a; 
    a = b ; 
    b = temp;

    printf("a = %d\n", a); 
    printf("b = %d\n", b); 
}