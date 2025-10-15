#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    freeMatrix(int** arr, size_t rows)
{
    while (rows > 0)
    {
        free(arr[rows - 1]);
        rows--;
    }
    printf("Momory Allocation Failed");
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
    while (i < cols)
    {
        *arr = (int*)calloc(cols, sizeof(int));
        if (i == 2)//test
            *arr = NULL;
        if (!*arr)
            freeMatrix(arr, i);
        i++;
    }
    return (arr);
}



int main(void)
{
    create2dArr(3,4);
    return (0);
}