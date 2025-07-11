#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

int main()
{
    int sourceArr[SIZE] = {0, 3, 4, 5, 6, 7, 8, 6, 5, 4, 4, 4, 4, 4, 3, 3, 0, 1};
    int countArr[10] = {0};

    int i;
    for (i = 0; i < SIZE; i++)
    {
        countArr[sourceArr[i]]++;
    }

    // 결과 출력
    printf("Number frequency:\n");
    for (i = 0; i < 10; i++)
    {
        if (countArr[i] > 0)
        {
            printf("Number %d appears %d times\n", i, countArr[i]);
        }
    }

    int idx = 0;
    for (i = 0; i < 9; i++)
    {
        if (countArr[i] >= countArr[idx])
        {

            idx = i;
        }
    }
    printf("Most frequant number: %d(%d times)", idx, countArr[idx]);

    return 0;
}