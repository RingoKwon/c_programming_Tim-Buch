#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct coordinate
{
    int x;
    int y;
} Coordinate;

void printPoint(Coordinate input)
{
    printf("---output---");
    printf("\nx: %d\ny: %d\n", input.x, input.y);
}
Coordinate setPoint()
{
    int x, y;
    Coordinate point;
    printf("---input---\n");
    printf("x: ");
    scanf("%d", &point.x);
    printf("y: ");
    scanf("%d", &point.y);
    return point;
}

int main()
{
    Coordinate point1, point2;
    point1 = setPoint();
    printPoint(point1);
    point2 = setPoint();
    printPoint(point2);
    return 0;
}