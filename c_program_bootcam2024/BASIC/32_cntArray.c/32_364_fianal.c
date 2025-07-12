#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10
/*
[Problem]
// Create an array to count occurrences of 'a'-'z', 'A'-'Z', and ' ' (space)
- count the most apeared charactor
[Memo]
- can map by usign conditainlas but curios it is best solution?

*/
int main()
{
    char sourceArr[SIZE] = {'d', 'E', 'm', 'O', ' ', 't', 'e', 'x', 't', 'd'};
    char idxArr[SIZE];
    char charArr[SIZE];
#define ARRLEN 53
    int countArr[ARRLEN] = {0}; // 26 lowercase + 26 uppercase + 1 space
    int i;
    int lowerAdj = -97, upperAjd = -39, spaceAdj = +20;
    // 'a' = 97, 'z'  = 122, 'A' = 65, 'Z' = 90, ' ' = 32
    // - |a-z|: x-97  = 0~25
    // - |A-Z|: x-39  = 26~51
    // - ' '  : 32+20 = 52

    for (i = 0; i < SIZE; i++)
    {
        if (sourceArr[i] >= 'a' && sourceArr[i] <= 'z')
        {
            idxArr[i] = sourceArr[i] + lowerAdj;
            countArr[idxArr[i]]++;
        }
        else if (sourceArr[i] >= 'A' && sourceArr[i] <= 'Z')
        {
            idxArr[i] = sourceArr[i] + upperAjd;
            countArr[idxArr[i]]++;
        }
        else if (sourceArr[i] == ' ')
        {
            idxArr[i] = sourceArr[i] + spaceAdj;
            countArr[idxArr[i]]++;
        }
    }
    // checking
    int sum = 0;
    for (i = 1; i < ARRLEN; i++)
    {
        // printf("%d\n", countArr[i]);
        printf("%d\n", charArr[i]);
        sum += countArr[i];
    }

    printf("total: %d\n", sum);

    for (i = 0; i < ARRLEN; i++)
    {
        printf("%c", i);
    }

    return 0;
}