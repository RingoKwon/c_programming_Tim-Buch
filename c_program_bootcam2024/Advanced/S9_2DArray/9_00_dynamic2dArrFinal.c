#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
void    freeMatrix(int** arr, size_t rows)
{
    while (rows > 0)
    {
        free(arr[rows - 1]);
        rows--;
    }
    printf("Memory freed");
    free(arr);
}

int** create2dArr(int rows, int cols)
{
    int** arr;
    size_t  i;

    arr = (int**)calloc(rows, sizeof(int*));
    if (!arr)
    {
        printf("Memory Allocation Failed");
        return (NULL);
    }
    i = 0;
    while (i < rows)
    {
        arr[i] = (int*)calloc(cols, sizeof(int));
        if (!arr[i])
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
    size_t rows;
    size_t cols;
    int** arr;

    rows = 3;
    cols = 4;
    arr = create2dArr(rows, cols);
    if (!arr)
    {
        fprintf(stderr, "create2dArr failed\n");
        return 1;
    }
    prt2dArr(arr, rows, cols);
    freeMatrix(arr, rows);
    return (0);
}