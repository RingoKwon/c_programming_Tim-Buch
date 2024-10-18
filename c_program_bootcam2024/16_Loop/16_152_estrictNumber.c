#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;

    printf("Enter Num: \n"); 
    scanf("%d", &num); 
    
    int i = 0; 
    while (i < num )
    {
        printf("*");
        i++;
        // printf("%d",i);
    }
    
    return 0; 
}

; 