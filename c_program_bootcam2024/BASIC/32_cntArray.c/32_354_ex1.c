#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 8

int main()
{
    int sequenceArray[SIZE] = {0, 5, 4, 2, 1, 3, 2, 0};
    int elementCnt[6] ={0} ;/// array initalization needed!!  6 not 5 
    int i ; 

    for ( i = 0; i < SIZE ; i++)
    {
        elementCnt[sequenceArray[i]]++;

    } 
    int j; 
    for (j = 0 ; j < 6; j++)
    {
        printf("idx: %d, cnt: %d\n", j, elementCnt[j]);
    }
    return 0;
}