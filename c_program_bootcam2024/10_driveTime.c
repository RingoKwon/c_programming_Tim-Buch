#include <stdio.h>
#include <stdlib.h>

// furter steps ; remaining minute , distance to go 

int main(){

    int  dist, speed, hour, remainingDist; 
    float remainingMin;

    printf("distance: "); 
    scanf ( "%d", &dist ); 
    printf("%d\n", dist); 

    printf("speed(km per hour): "); 
    scanf ( "%d", &speed ); 

    hour = dist/speed;
    remainingDist  = dist % speed;
    remainingMin = remainingDist/(float)speed*60.0f;

    

    printf("It will takes %d hour and %.0f min\n",  hour, remainingMin);

    return 0; 
}