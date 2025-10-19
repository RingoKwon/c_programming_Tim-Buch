#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

int main(void)
{
    typedef struct {
        int x;
        int y;
    }   Point;
    size_t i;

    Point   point[SIZE];    
    i = 0;
    while (i < SIZE)
    {
        printf("Enther %zuth x element: ", i + 1);
        scanf("%d", &point[i].x);
        printf("Enther %zuth y element: ", i + 1);
        scanf("%d", &point[i].y);
        i++;
    }
    i = 0;
    while (i < SIZE)
    {
        printf("(%d, %d)\n", point[i].x, point[i].y);
        i++;
    }
    return (0);
}