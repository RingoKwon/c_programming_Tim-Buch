#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, numConvert = 0, i, totalNumConvert = 0, j = 1;

    printf("Enter: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        numConvert = numConvert + 1;
        totalNumConvert = totalNumConvert + numConvert;

        for (j = totalNumConvert - numConvert +1; j <= totalNumConvert; j++)
        {

            printf("%d ", j);
        }
        printf("\n");
    }

    // printf("%d \n", totalNumConvert);
    // printf("%d \n", numConvert);

    return 0;
}