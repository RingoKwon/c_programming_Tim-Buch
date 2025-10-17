#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    free2DArr(int** arr, size_t rows)
{
    while (rows > 0)
    {
        free(arr[rows - 1]);
        rows--;
    }
    free(arr);
    printf("Memory Freed");
}

void   allocate2DMatrixByRef(int*** arr, size_t rows, size_t cols)
{
    size_t i;

    *arr = (int**)calloc(3, sizeof(int*));
    if (!*arr)
    {
        printf("Memory Allocation Failed");
        return ;
    }
    i = 0;
    while (i < rows)
    {
        (*arr)[i] = (int*)calloc(cols, sizeof(int));
        if (!(*arr)[i])
            free2DArr(*arr, i);
        i++;
    }
}

int main(void)
{
    int** arr;
    size_t rows;
    size_t cols;

    printf("Enter rows: ");
    scanf("%zu", &rows);
    printf("Enter cols: ");
    scanf("%zu", &cols);
    allocate2DMatrixByRef(&arr, rows, cols);
    free2DArr(arr, rows);
    return (0);
}