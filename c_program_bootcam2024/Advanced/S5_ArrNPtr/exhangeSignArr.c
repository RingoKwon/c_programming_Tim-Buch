#include <stdio.h>
#define SIZE 5

int signCheck(int a, int b)
{
    if ((a * b) < 0)
        return (1);
    return (0);
}

int arrCheckMy(int* arr, int size)
{
    if (size == 1)
        return (1);
    if (!signCheck(arr[size - 1], arr[size - 2]))
        return (0);
    else
        return arrCheckMy(arr, size - 1);
}

int arrCheckMy2(int* arr, int size)
{
    if (size == 1)
        return (1);
    if (!signCheck(arr[0], arr[1]))
        return (0);
    else
        return arrCheckMy(arr + 1, size - 1);
}

int arrCheckMy3(int* arr, int size)
{
    if (size == 1)
        return (1);
    if (!signCheck(arr[0], arr[1]))
        return (0);
    else
        return arrCheckMy(&arr[1], size - 1);
}

int main(void)
{
    int arr[SIZE] = {-1,2,-3,4,-5};
    printf("%d\n", arrCheckMy(arr, SIZE));
    printf("%d\n", arrCheckMy2(arr, SIZE));
    printf("%d\n", arrCheckMy3(arr, SIZE));
    return (0);
}