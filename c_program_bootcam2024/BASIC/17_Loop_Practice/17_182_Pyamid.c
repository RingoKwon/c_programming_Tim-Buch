#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, i, j, k;
    int blackSpace;
    int currentValue;

    printf("Enter: ");
    scanf("%d", &num);

    blackSpace = num - 1;
    for (i = 1; i <= num; i++)
    {

        for (k = 1; k <= blackSpace; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", currentValue);
            currentValue++; 
        }
        printf("\n");
        blackSpace--;
    }

    // printf("%d \n", totalNumConvert);
    // printf("%d \n", numConvert);

    return 0;
}