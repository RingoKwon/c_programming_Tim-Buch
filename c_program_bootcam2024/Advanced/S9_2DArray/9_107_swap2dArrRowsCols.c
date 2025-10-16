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
    size_t i;
    size_t j;

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
    size_t i;

    arr = (int**)calloc(rows, sizeof(int*));
    if (!arr)
    {
        printf("Memory Allocation Failed\n");
        return (NULL);
    }
    i = 0;
    while (i < rows)
    {
        (arr)[i] = (int*)calloc(cols, sizeof(int));
        if (!arr[i])
        {
            freeMatrix(arr, i);
            return (NULL);
        }
        i++;
    }
    return (arr);
}

void    swapRows(int** arr, size_t r1, size_t r2)
{
    int* temp;

    temp = arr[r1];
    arr[r1] = arr[r2];
    arr[r2] = temp;
}

void    swapCols(int** arr, size_t rows, size_t c1, size_t c2)
{
    size_t  i;
    int temp;

    // temp = (int*)calloc(rows, sizeof(int));
    // if (!temp)
    // {
        // printf("Memory Allocation Failed\n");
        // return;
    // }
    i = 0;
    while (i < rows)
    {
        temp = arr[i][c1];
        arr[i][c1] = arr[i][c2];
        arr[i][c2] = temp;
        i++;
    }
    // free(temp);
}

int main(void)
{
    int** arr;
    size_t rows;
    size_t cols;

    rows = 4;
    cols = 3;
    arr = create2dArr(rows, cols);
    if (!arr)
        return (1);
    allocEle(arr, rows, cols);
    printf("Original\n");
    prt2dArr(arr, rows, cols);
    printf("Row Swap\n");
    swapRows(arr, 1,2);
    prt2dArr(arr, rows, cols);
    printf("Col Swap\n");
    swapCols(arr, rows, 0, 1);
    prt2dArr(arr, rows, cols);
    freeMatrix(arr, rows);
    return (0);
}