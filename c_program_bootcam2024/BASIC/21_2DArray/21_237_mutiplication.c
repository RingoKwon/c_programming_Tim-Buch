#include <stdio.h>
#include <stdlib.h>
#define SIZE 11

int main()
{
    int multi2DArray[SIZE][SIZE] ={0};
    int i, j;

    for (i = 1; i < SIZE; i++)
    {
        for (j = 1; j < SIZE; j++)
        {
            multi2DArray[i][j] = i * j;
        }
    }
    for (i = 1; i < SIZE; i++)
    {
        for (j = 1; j < SIZE; j++)
        {
            printf("%5d ", multi2DArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}