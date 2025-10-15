#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void freeMatrix(int** arr, size_t rows)
{
    while (rows > 0)
    {
        free(arr[rows - 1]);
        rows--;
    }
    free(arr);
    printf("Memory Freed\n");
}

void    prt2dArr(int** arr, size_t rows, size_t cols)
{
    int i;
    int j;

    i = 0;
    while (i < rows)
    {
        j = 0;
        while (j < cols)
        {
            printf("%d ", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");
}

int** create2dArr(size_t rows, size_t cols)
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
        *arr = (int*)calloc(cols, sizeof(int));
        if (!*arr)
        {
            freeMatrix(arr, i);
            return (NULL);
        }
        i++;
    }
    return (arr);
}

int main(void)
{
    int** arr;
    size_t rows;
    size_t cols;

    rows = 4;
    cols = 4;
    arr = create2dArr(rows, cols);
    prt2dArr(arr, rows, cols);
    return (0);
}