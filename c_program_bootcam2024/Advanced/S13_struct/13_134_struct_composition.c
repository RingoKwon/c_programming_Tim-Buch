#include <stdio.h>
#include <stdlib.h>

typedef struct {
int x;
int y;
} Point;
typedef struct{
    Point   center;
    double redius;
} Circle;
typedef struct{
    Point   center[2];
    double  redius;
} CircleArr;

void    prtCircle(Circle in)
{
    printf("x: %d; ", in.center.x);
    printf("y: %d; ", in.center.y);
    printf("r: %f\n", in.redius);
}

void    prtCirArr(CircleArr in)
{
    printf("x1: %d, y1: %d\n", in.center[0].x, in.center[1].y);
    printf("x2: %d, y3: %d\n", in.center[1].x, in.center[1].y);
    printf("redius: %f", in.redius);
}


int main(void)
{
    Point center = {1,2};
    printf("%d\n", center.x);
    Circle circle;
    circle.center = center;
    circle.center.y = 99;
    circle.redius = 3.3;
    
    prtCircle(circle);
    printf("------------struct arr-------\n");
    Point   centArr[2] = {{1,1}, {2,2}};
    CircleArr cArr;
    cArr.center[0] = center; 
    cArr.center[1] = center; 
    cArr.redius = 3.33;
    prtCirArr(cArr);

    return (0);
}