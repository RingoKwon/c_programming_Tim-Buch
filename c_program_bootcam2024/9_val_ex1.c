#include <stdio.h>
int main ( ){
    int _age; 
    int _current;

    printf("age:"); 
    scanf("%d", _age); 

    printf("current year"); 
    scanf("%d", _current); 

    printf("birth year: %d", _current - _age); 

    return 0; 
}