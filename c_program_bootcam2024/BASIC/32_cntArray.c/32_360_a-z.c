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
    printf("Character frequency:\n");
    for (i = 0; i < 26; i++)
    {
        if (countArr[i] > 0)
        {
            printf("Character '%c' appears %d times\n", i + 97, countArr[i]);
        }
    }

    int idx = 0;
    for (i = 0; i < 26; i++)  // a~z 모든 문자 확인
    {
        if (countArr[i] >= countArr[idx])
        {

            idx = i;
        }
    }
    printf("Most frequent character: '%c' (%d times)\n", idx + 97, countArr[idx]);
    
    return 0;
}