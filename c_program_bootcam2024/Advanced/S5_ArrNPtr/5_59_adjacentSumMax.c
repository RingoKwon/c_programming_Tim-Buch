#include <stdio.h>
#define SIZE 5

int adjacentSumMaxMy(int* arr, int size)
{
    int max;
    int adjSum;

    adjSum = arr[size - 2] +arr[size - 1];
    if (size == 2)
        return adjSum;
    max = adjacentSumMaxMy(arr, size - 1);
    if (max < adjSum)
        max = adjSum;
    return max;
}

int main(void)
{
    int arr[SIZE] = {1,3,6,2,3};
    int res;
    res = adjacentSumMaxMy(arr, SIZE);
    printf("%d", res);
    return (0);
}