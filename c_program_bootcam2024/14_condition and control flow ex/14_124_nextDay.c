#include <stdio.h>
#include <stdlib.h>

int main()
{

    int y, m, d;
    int y_d_4, y_d_100, y_d_400;
    int leap;
    int lastDate;

    printf("Enter year, month, date: \n");
    scanf("%d%d%d", &y, &m, &d);

    y_d_4 = y % 4;
    y_d_100 = y % 100;
    y_d_400 = y % 400;
    // leap year
    if (y_d_4 == 0)
    {
        if (y_d_400 == 0)
        {
            leap = 1;
        }
        else if (y_d_100 == 0)
        {
            leap = 0;
        }
        else
        {
            leap = 1;
        }
    }
    else
    {
        leap = 0;
    }
    // month
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        lastDate = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        lastDate = 30;
        break;
    case 2:
        if (leap == 1)
        {
            lastDate = 29;
        }
        else
        {
            lastDate = 28;
        }
        break;
    default:
        printf("Invalid month\n");
        return 1;
    }

    if (! (d>0 && d <= lastDate))
    {
        printf("invalid date \n"); 
    }
    

    // increase one day
    d++;
    // increase month
    if (d > lastDate)
    {
        m++;
        d = 1; 
    }

    //  increase year
    if (m == 13)
    {
        y++;
        m = 1;
    }

    printf("%d \n", leap);
    printf("%d \n", d);
    printf("%d \n", m);
    printf("%d \n", y);

    return 0;
}
