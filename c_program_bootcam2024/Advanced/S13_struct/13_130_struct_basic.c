#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    typedef struct {
        int x;
        int y;
    }   Point;
    size_t i;
    size_t totalPoints;

    printf("Enter total points: ");
    scanf("%lu", &totalPoints);

    Point*   point;    
    point = (Point*)malloc(sizeof(Point) * totalPoints);
    
    i = 0;
    while (i < totalPoints)
    {
        printf("Enther %zuth x element: ", i + 1);
        scanf("%d", &point[i].x);
        printf("Enther %zuth y element: ", i + 1);
        scanf("%d", &point[i].y);
        i++;
    }
    i = 0;
    while (i < totalPoints)
    {
        printf("(%d, %d)\n", point[i].x, point[i].y);
        i++;
    }
    return (0);
}