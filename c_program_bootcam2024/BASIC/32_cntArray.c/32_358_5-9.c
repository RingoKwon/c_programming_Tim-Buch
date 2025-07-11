#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

int main()
{
    int sourceArr[SIZE] = {7, 5, 9, 8, 6, 10, 5, 7, 8, 9, 6, 7, 5, 8, 9, 10, 6, 7, 8, 5};
    int countArr[6] = {0};

    int i;
    for (i = 0; i < SIZE; i++)
    {
        countArr[sourceArr[i]-5]++;
    }

    // 결과 출력
    printf("Number frequency:\n");
    for (i = 0; i < 6; i++)
    {
        if (countArr[i] > 0)
        {
            printf("Number %d appears %d times\n", i + 5, countArr[i]);
        }
    }

    int idx = 0;
    for (i = 0; i < 6; i++)  // 0~5 모든 인덱스 확인
    {
        if (countArr[i] >= countArr[idx])
        {

            idx = i;
        }
    }
    printf("Most frequent number: %d (%d times)\n", idx + 5, countArr[idx]);

    return 0;
}