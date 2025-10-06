#include <stdio.h>
#define SIZE 4

int maxArr(int* arr, int size)
{
    int i;
    int max;
    
    i = 0;
    max = arr[0];
    while( i < size)
    {
        if (max < arr[i])
            max = arr[i];
        i++;
    }
    return max;
}

int main(void)
{
    int arr[SIZE] = {1,2,4,3};
    int result;
    result = maxArr(arr, SIZE);
    printf("Result = %d", result);
    return 0;
}