#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, i ; 

    printf("Enter: "); 
    scanf("%d", &num ); 

    for ( i = 1 ; i <= 10 ; i++){
        printf("%d x %d = %d \n", num, i, num*i); 
    }

    return 0; 
}