#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;

    printf("Enter Num: \n"); 
    scanf("%d", &num); 
    

    while (num >0 )
    {
        printf("*");
        num--; 
        // printf("%d",i);
    }
    
    printf("\n");
    
    return 0; 
}

; 