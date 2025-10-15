#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    freeMatrix(int** arr, size_t size)
{
    int i;

    while (size > 0)
    {
        free(arr[size]);
        size--;
    }
}

int main(void)
{
    int** arr;
    size_t rows;
    size_t cols;
    size_t i;
    
    printf("Enter rows number: ");
    scanf("%zu", &rows);
    arr = (int**)calloc(rows, sizeof(int*));
    if (!arr)
    {
        printf("Memory Allocation Failed");
        return (1);
    }
    i = 0;
    while (i < rows)
    {
        printf("Enter %zu th cols number: ", i);
        scanf("%zu", &cols);
        arr[i] = (int*)calloc(cols, sizeof(int));
        if (!arr[i])
        {
            freeMatrix(arr, i);
            return (1);
        }
        i++;
    }
    
    return (0);
}