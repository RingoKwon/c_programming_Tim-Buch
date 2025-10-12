#include <stdio.h>
#include <stdlib.h>

int* createArray(int size)
{
    int* arr;

    arr = (int*)malloc(sizeof(int) * size);
    return (arr);
}
void    initArray(int** arr, int size)
{
    int i;

    *arr = (int*)malloc(sizeof(int) * size);
    if (arr)
    {
        i = 0;
        while (i < size)
        {
            printf("Enter: ");
            scanf("%d", &(*arr)[i]);
            i++;
        }
    }
}

void    displayArray(int* arr, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf(" %d", arr[i]);
        i++;
    }
    printf("\n");
}

int doubleArraySize(int** arr, int size)
{
    int* tmp;
    int i;

    size *= 2;
    tmp = (int*)realloc(*arr, sizeof(int) * size);
    if (!tmp)
        return -1;
    i = 0;
    while (i < size)
    {
        (*arr)[i] = 0;
        i++;
    }
    *arr = tmp;
    // free(tmp);
    return size;
}

void    freeMemory(int** arr)
{
    free(*arr);
}

int main(void)
{
    int* arr;
    int size;

    size = 2;
    createArray(size);
    initArray(&arr, size);
    displayArray(arr, size);
    size = doubleArraySize(&arr, size);
    displayArray(arr, size);
    freeMemory(&arr);
    return (0);
}