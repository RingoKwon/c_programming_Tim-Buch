#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void freeMatrix(int** arr, size_t rows)
{
    while (rows > 0)
    {
        free(arr[rows - 1]);
        printf("rows: %zu\n", rows - 1);// test
        rows--;
    }
    free(arr);
    printf("Memory Freed\n");
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
        *arr = (int*)calloc(rows, sizeof(int));
        if(i == 2)// test   
            *arr = NULL;
        if (!*arr)
        {
            freeMatrix(arr, i);
            return (NULL);
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    int** arr;
    size_t rows;
    size_t cols;

    rows = 4;
    cols = 4;
    arr = create2dArr(rows, cols);
    return (0);
}
