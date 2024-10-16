#include <stdio.h>
#include <stdlib.h>

int main()
{

    int y, m, d;
    int y_d_4, y_d_100, y_d_400;
    int leap = 0;
    int lastDate;

    printf("Enter year, month, date: \n");
    scanf("%d%d%d", &y, &m, &d);
    printf("you entered %02d:%02d:%02d \n", y, m, d);

    y_d_4 = y % 4;
    y_d_100 = y % 100;
    y_d_400 = y % 400;
    // leap year
    if (m == 2)
    {
        if (y % 4 == 0 && (y % 4 == 0 || y && 100 != 0))
        {
            leap = 1;
        }
    }

    d += 1;

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
        if (d <= 31)
            break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (d <= 30)
            break;
    case 2:
        if (d <= 29 && leap == 1)
            break;
        else if (d <= 28)
            break;
    default:
        d = 1;
        m += 1;
        if (m == 12)
        {
            m = 1;
            y += 1;
        }
    }

    printf("The next day = %02d:%02d:%02d \n", y, m, d);

    return 0;
}
