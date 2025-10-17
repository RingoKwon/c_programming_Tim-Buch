#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void    free2dArr(int** arr, size_t size)
{
    while (size > 0)
    {
        free(arr[size - 1]);
        size--;
    }
    free(arr);
}
int** lowerTriangle(size_t size)
{
    size_t i;
    int** arr;

    arr = (int**)calloc(size, sizeof(int*));
    if (!arr)
    {
        printf("Memory Allocation Failed");
        return (NULL);
    }
    i = 0;
    while (i < size)
    {
        arr[i] = (int*)calloc(i + 1, sizeof(int));
        if (!arr[i])
        {
            free2dArr(arr, i);
            return (NULL);
        }
        i++;
    }
    return (arr);
}

void    prtLowerTriangle(int** arr, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < i + 1)
        {
            printf("%2d", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}

int**   upperTriangle(size_t size)
{
    size_t  i;
    int** arr;

    arr = (int**)calloc(size, sizeof(int*));
    if (!arr)
    {
        printf("Memory Allocation Failed");
        return (NULL);
    }
    i = 0;
    while (i < size)
    {
        arr[i] = (int*)calloc(size - i, sizeof(int));
        i++;
    }
    return (arr);
}

void    prtUpperTriangle(int** arr, size_t size)
{
    size_t i;
    size_t j;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j/2 < i)
        {
            printf(" ");
            j++;
        }
        j = 0;
        while (j < size - i)
        {
            printf("%2d", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
int main(void)
{
    size_t size;
    int** arr;

    size = 4;
    printf("Lower Triangle\n");
    arr = lowerTriangle(size);
    if (!arr)
    {
        printf("Memory Allocation Failed");
        return (1);
    }
    prtLowerTriangle(arr, size);
    free2dArr(arr, size);
    printf("Upper Triangle\n");
    arr = upperTriangle(size);
    prtUpperTriangle(arr, size);
    return (0);
}