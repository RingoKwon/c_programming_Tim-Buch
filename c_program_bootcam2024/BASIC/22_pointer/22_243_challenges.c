#include <stdio.h>
#include <stdlib.h>

int main() { 
    
    int grade1 = 1 ,  grade2 = 2 ;
    int *p, *a; 

    printf( "%d\n", grade1);
    printf( "%p\n", &grade1);
    printf( "%d\n", grade2);
    printf( "%p\n", &grade2);

//  important! 
    a = &grade1; 
    printf("\n");
    printf("%p\n", a );  
    printf("\n");
    printf("%d\n", *a );   
    printf("%d\n", grade1  );   

    return 0; 
} 