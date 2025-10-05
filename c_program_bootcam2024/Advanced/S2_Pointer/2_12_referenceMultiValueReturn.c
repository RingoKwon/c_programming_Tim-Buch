#include <stdio.h>

void minMax(int n1,int n2, int *pMin,int *pMax)
{
    if (n1 > n2)
    {
        *pMin = n2;
        *pMax = n1;
    }
    else
    {
        *pMin = n1;
        *pMax = n2;
    }
}

int main(void)
{
    int min, max;
    minMax(3, 5, &min, &max);
    printf("Min = %d, Max = %d", min, max);
    return 0;
}