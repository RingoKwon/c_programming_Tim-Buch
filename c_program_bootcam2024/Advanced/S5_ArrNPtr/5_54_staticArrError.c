#include <stdio.h>
#define SIZE 5

int* enterEle(int* arr, int size);

int main(void)
{
    int *arr;
    arr = enterEle(arr, SIZE);
    return (0);
}

int* enterEle(int* arr, int size)
{
    int i;

    printf("Enter %d element\n", size);
    i = 0;
    while (i < SIZE) 
    {
        printf("%dth element: ", i + 1);
        scanf("%d", &arr[i]);
        printf("\n");
        i++;
    }

    return arr;
}