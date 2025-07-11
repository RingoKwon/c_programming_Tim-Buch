#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20

int main()
{
    char sourceArr[SIZE] = {'a', 'b', 'c', 'a', 'd', 'e', 'b', 'c', 'a', 'e', 'd', 'b', 'c', 'a', 'd', 'e', 'b', 'c', 'a', 'd'};
    // 122-97 +1 = 26 
    int countArr[26] = {0};

    int i;
    for (i = 0; i < SIZE; i++)
    {
        countArr[sourceArr[i]-97]++;
    }

    // 결과 출력
    printf("Number frequency:\n");
    for (i = 0; i < 6; i++)
    {
        if (countArr[i] > 0)
        {
            printf("Number %c appears %d times\n", i + 97, countArr[i]);
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
    printf("Most frequent number: %c (%d times)\n", idx + 97, countArr[idx]);
    printf("%d", 'z');
    return 0;
}