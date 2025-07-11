#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 8

int main()
{
    int sequenceArray[SIZE] = {0, 5, 4, 2, 1, 3, 2, 0};
    int elementCnt[5] ; 
    int i ; 

    for ( i = 0; i < SIZE ; i++)
    {
        elementCnt[sequenceArray[i]]++;
    }
    return 0;
}