#include <stdio.h>
#include <stdlib.h>

int main() {

    int input, check ; 

    printf("number: ");
    scanf("%d",&input);
    check = input%2; 
    
    if(check ==  0  ){
        printf("%d is even number \n", input);
    }else{
        printf("%d is odd number \n", input);

    }

    return 0; 
}