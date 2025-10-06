/*
requirement: iterative approach, reculsive approach
#1 [1,2,3,4,5] return = 1, pass = 1; Really sorted
#2 [1,2,2,3,4] return = 1, pass = 0; Sorted
#3 [1,2,4,3,5] return = 0, pass = 0; Not sorted
*/
#include <stdio.h>
#define SIZE 5

int sortIterative(int* arr, int size ,int* pass)
{
    int i;

    i = 0;
    *pass = 1;
    while (i < size - 1)
    {
        if(arr[i] >= arr[i + 1])
            *pass = 0;
        if(arr[i] > arr[i + 1])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main(void)
{
    int arr1[SIZE] = {1,2,3,4,5}; // Really Sorted
    int arr2[SIZE] = {1,2,2,4,5}; // Sorted
    int arr3[SIZE] = {1,2,5,3,4}; // Not Sorted
    int passIterative;
    int resultIterative;

    resultIterative = sortIterative(arr1, SIZE, &passIterative);
    printf("Iterative return = %d, pass = %d", resultIterative, passIterative);
    return 0;
}