#include <stdio.h>
#define SIZE1 5
#define SIZE2 6


int palindromeMy(int* arr, int size)
{
    if (size == 0)
        return (1);
    if (arr[0] != arr[size - 1])
    {
        return (0);
    }
    else 
        return (1);
    return palindromeMy(arr + 1, size - 2);
}

int main(void)
{
    int arr1[SIZE1] = {1,2,3,2,1};
    int arr2[SIZE2] = {1,2,3,3,2,1};
    int result;

    result = palindromeMy(arr1, SIZE1);
    printf("%d", result);
    return (0);
}