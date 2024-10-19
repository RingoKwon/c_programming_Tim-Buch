#include <stdio.h>
#include <stdlib.h>

int maxDigit2()
{
    int num, d2, d1;
    do
    {
        printf("Enter 2 digit number: ");
        scanf("%d", &num);
    } while (num / 100 != 0 || num <= 9);
    d2 = num / 10;
    d1 = num % 10;
    if (d2 > d1)
    {
        return d2;
    }
    else if (d2 == d1)
    {
        return 0;
    }
    else
    {

        return d1;
    }
}

int main()
{

    int max = maxDigit2();
    printf("%d", max);

    return 0;
}