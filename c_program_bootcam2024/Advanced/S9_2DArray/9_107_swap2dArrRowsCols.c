#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

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

void    allocEle(int** arr, size_t rows, size_t cols)
{
    size_t i;
    size_t j;

    i = 0;
    while (i < rows)
    {
        j = 0;
        while (j < cols)
        {
            arr[i][j] = (i + 1) * pow(10, j);
            j++;
        }
        i++;
    }
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
        (arr)[i] = (int*)calloc(cols, sizeof(int));
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
    cols = 3;
    arr = create2dArr(rows, cols);
    allocEle(arr, rows, cols);
    if (!arr)
        return (0);
    prt2dArr(arr, rows, cols);
    freeMatrix(arr, rows);
    return (0);
}