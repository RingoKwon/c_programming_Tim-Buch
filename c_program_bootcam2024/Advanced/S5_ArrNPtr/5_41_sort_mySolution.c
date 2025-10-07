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
int sortRecursive(int* arr, int size, int idx,  int* pass)
{
    if (idx > size - 2)
        return 1;
    if (arr[idx] >= arr[idx + 1])
    {
        *pass = 0;
    }
    if (arr[idx] > arr[idx + 1])
        return 0;
    
    return sortRecursive(arr, size, idx + 1, pass);   
}

int main(void)
{
    int arr1[SIZE] = {1,2,3,4,5}; // Really Sorted
    int arr2[SIZE] = {1,2,2,4,5}; // Sorted
    int arr3[SIZE] = {1,2,3,5,4}; // Not Sorted
    int passIterative;
    int resultIterative;
    int passRecursive;
    int resultRecursive;

    passRecursive = 1;
    resultIterative = sortIterative(arr3, SIZE, &passIterative);
    printf("Iterative return = %d, pass = %d\n", resultIterative, passIterative);
    printf("--------------------------\n");
    resultRecursive = sortRecursive(arr2, SIZE, 0, &passRecursive);
    printf("Recursive return = %d, pass = %d\n", resultRecursive, passRecursive);
    return 0;
}