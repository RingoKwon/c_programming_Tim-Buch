#include <stdio.h>
#include <stdlib.h>

void    createArrInt(int size, int** ptr)
{
    int* arr;
    int i;
    int ele;

    arr = (int*)malloc(sizeof(int) * size);
    if (!arr)
        arr = NULL;
    i = 0;
    while (i < size)
    {
        printf("Enter %dth a element: ", i);
        scanf("%d", &ele);
        arr[i] = ele;
        i++;
    }
    *ptr = arr;
}

void    createArrInt2(int size, int** ptr)
{
    int i;

    *ptr = (int*)malloc(sizeof(int) * size);
    if (!*ptr)
        *ptr = NULL;
    i = 0;
    while (i < size)
    {
        printf("Enter %dth a element: ", i);
        scanf("%d", &(*ptr)[i]);
        i++;
    }
}
void    prtArr(int* arr, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
    printf("\n-----------------------\n");
}
int main(void)
{
    int size;
    int* arr;

    printf("Enter size: ");
    scanf("%d", &size);
    createArrInt(size, &arr);
    prtArr(arr, size);
    createArrInt2(size, &arr);
    prtArr(arr, size);

    return (0);
}