#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void freeMatrix(int** arr, size_t rows)
{
    while (rows > 0)
    {
        free((arr)[rows - 1]);
        rows--;
    }
    free(arr);
    printf("Memory Freed\n");
}

int** creat2dArr(size_t rows, size_t cols)
{
    int** arr;
    int i;

    arr = (int**)calloc(rows, sizeof(int*));
    if (!arr)
    {
        printf("Memory Allocation Failed");
    }
    i = 0;
    while (i < rows)
    {
        *arr = (int*)calloc(rows, sizeof(int));
        i++;
    }
    return (NULL);
}

int main(void)
{
    return (0);
}
