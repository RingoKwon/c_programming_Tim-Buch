#include <stdio.h>
#define SIZE 4

int sumArr(int* arr, int size)
{
    int i;
    int sum;

    i = 0;
    sum = 0;
    while (i < SIZE)
        sum += arr[i++]; 
    return sum;
}

int main(void)
{
    int arr[SIZE] = {1,2,5,3};
    double result;

    result = (double)sumArr(arr, SIZE)/SIZE;
    printf("sum: %lf", result);
}