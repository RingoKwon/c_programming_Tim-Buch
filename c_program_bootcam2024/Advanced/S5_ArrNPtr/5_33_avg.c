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

double avgArr(int* arr, int size)
{
    double avg;

    avg = (double)sumArr(arr, size)/size;
    return avg;
}

int main(void)
{
    int arr[SIZE] = {1,2,5,3};
    double result;

    result = avgArr(arr, SIZE);
    printf("sum: %lf", result);
}