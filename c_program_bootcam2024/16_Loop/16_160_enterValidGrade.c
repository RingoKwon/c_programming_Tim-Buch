#include <stdio.h>
#include <stdlib.h>

int main() { 

    int grade ; 



    do{
        printf("ENter: ");
        scanf("%d", &grade); 
    }while (grade<=0 || grade>=100);
    printf("good");
    
    return 0; 
}