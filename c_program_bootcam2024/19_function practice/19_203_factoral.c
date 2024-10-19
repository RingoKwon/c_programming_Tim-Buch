#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{
    int i, facrSum = 1;
    for (i = 1; i <= num; i++)
    {
        facrSum = facrSum * i;
    }
    return facrSum;
}

int main()
{
    int factorial_val = factorial(10);
    printf("%d", factorial_val);

    return 0;
}