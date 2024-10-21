#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myArr[7];
    int max, i, idx = 0, j;

    for (j = 0; j < 7; j++)
    {
        printf("Enter num: \n");
        scanf("%d", &myArr[j]);
    }

    max = myArr[0];
    for (i = 1; i < 7; i++)
    {
        if (max < myArr[i])
        {
            max = myArr[i];
            idx = i;
        }
    }
    printf("%d\n", idx);

    return 0;
}