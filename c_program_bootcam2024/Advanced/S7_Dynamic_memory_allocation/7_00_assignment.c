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
    *arr = (int*)malloc(sizeof(int) * size);
}

void    displayArray(int* arr, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
}

int* doubleArraySize(int** arr, int size)
{
    int* tmp;

    tmp = (int*)realloc(arr, sizeof(int) * size * 2);

}

int main(void)
{
    int* arr;
    int size;

    size = 2;
    createArray(size);
    initArray(&arr, size);
    displayArray(arr, size);

    return (0);
}