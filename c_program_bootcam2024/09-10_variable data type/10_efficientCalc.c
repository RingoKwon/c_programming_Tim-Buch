#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int x , xp2, xp4, xp8;
    printf("X: ");
    scanf("%d", &x);

    xp2 = x*x;
    xp4 = xp2*xp2;
    xp8 = xp4*xp4; 

    printf("X power 2 = %d \n", xp2);
    printf("X power 4 = %d \n", xp4);
    printf("X power 8 = %d \n", xp8);
    return 0;
}