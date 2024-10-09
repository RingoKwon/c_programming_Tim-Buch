#include <stdio.h>
#include <stdlib.h>

int main(){

    float dist, speed, hour; 

    printf("distance: "); 
    scanf ( "%f", &dist ); 
    printf("%f\n", dist); 

    printf("speed(km per hour): "); 
    scanf ( "%f", &speed ); 

    hour = dist/speed;
    printf("hours to get = %.2f\n",  hour);

    return 0; 
}