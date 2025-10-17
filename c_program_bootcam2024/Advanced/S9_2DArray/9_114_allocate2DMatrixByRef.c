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
    printf("Memory Freed\n");
}

void   allocate2DMatrixByRef(int*** arr, size_t rows, size_t cols)
{
    size_t i;

    *arr = (int**)calloc(rows, sizeof(int*));
    if (!*arr)
    {
        printf("Memory Allocation Failed\n");
        return ;
    }
    i = 0;
    while (i < rows)
    {
        (*arr)[i] = (int*)calloc(cols, sizeof(int));
        if (!(*arr)[i])
        {
            free2DArr(*arr, i);
            return ;
        }
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