#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float x1,y1, x2,y2;

    printf("x1:");
    scanf("%f",&x1 );

    printf("y1:");
    scanf("%f",&y1 );
    
    printf("x2:");
    scanf("%f",&x2 );

    printf("y2:");
    scanf("%f",&y2 );

    printf( "(x1, y1) = (%.1f, %.1f), (x2, y2) = (%.1f, %.1f) \n",x1, y1, x2, y2 );
    // distance calculation 
    float x_dist_p, y_dist_p;
    double distance; 

    x_dist_p = (x1- x2)*(x1-x2); 
    y_dist_p = (y1- y2)*(y1-y2);

    distance = sqrt(x_dist_p + y_dist_p);

    printf("The distance between the points is: %.2f\n", distance);

    return 0;
}