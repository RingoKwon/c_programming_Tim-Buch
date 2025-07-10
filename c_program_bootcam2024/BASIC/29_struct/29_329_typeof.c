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
    printf("x: %d\n y: %d", input.x, input.y);
}


int main()
{

    return 0;
}