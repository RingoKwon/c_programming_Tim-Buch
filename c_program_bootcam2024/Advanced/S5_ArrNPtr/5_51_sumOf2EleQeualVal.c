#include <stdio.h>
#define SIZE 5

int checkConMy(int* arr,int size ,int val, int* idx1, int* idx2)
{
    int i;
    int j;

    i = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            // printf("i: %d, j: %d\n", arr[i], arr[j]);
            if (val == arr[i] + arr[j])
            {
                *idx1 = i;
                *idx2 = j;
                return (1);
            }
            j++;
        }
        i++;
    }
    *idx1 = 0;
    *idx2 = 0;
    return (0);
}

int checkConVladOpt(int* arr, int size, int val, int *idx1, int *idx2)
{
    int i;
    int j;
    int sumVal;

    i = 0;
    j = size - 1;
    while (i != j)
    {
        sumVal = arr[i] + arr[j];
        if (sumVal == val)
        {
            *idx1 = i;
            *idx2 = j;
            return (1);
        }
        if (sumVal > val)
            j--;
        else
            i++;
        }
    *idx2 = 0;
    *idx1 = 0;
    return (0);
}

int main(void)
{
    int arr[SIZE] = {1,2,3,4,5};
    int val = 7;
    int result;
    int idx1;
    int idx2;

    result = checkConMy(arr, SIZE, val, &idx1, &idx2);
    printf("My Result: %d,  %d + %d\n", result, arr[idx1],  arr[idx2]);
    result = checkConVladOpt(arr, SIZE, val, &idx1, &idx2);
    printf("OPT Result: %d,  %d + %d\n", result, arr[idx1],  arr[idx2]);
    return (0);
}