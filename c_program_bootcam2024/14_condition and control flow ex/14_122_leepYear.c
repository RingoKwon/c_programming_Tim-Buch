#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y, y_d_4, y_d_100, y_d_400;

    printf("Enter the year: \n");
    scanf("%d", &y);

    y_d_4 = y % 4;
    y_d_100 = y % 100;
    y_d_400 = y % 400;

    if (y_d_4 == 0)
    {
        if (y_d_400 == 0)
        {
            printf("yes");
        }
        else if (y_d_100 == 0)
        {
            printf("no");
        }
        else
        {
            printf("yes");
        }
    }
    else
    {
        printf("no");
    }
    return 0;
}