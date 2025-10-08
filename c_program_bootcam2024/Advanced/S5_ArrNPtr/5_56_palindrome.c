#include <stdio.h>
#define SIZE1 5
#define SIZE2 6


int palindromeMy(int* arr, int size)
{
    if (size <= 1)
        return (1);
    if (arr[0] != arr[size - 1])
    {
        return 0 * palindromeMy(arr + 1, size - 2);
    }
    return 1 * palindromeMy(arr + 1, size - 2);
}

int main(void)
{
    int arr1[SIZE1] = {1,2,3,2,1};
    int arr2[SIZE2] = {1,1,3,3,1,1};
    int result;

    result = palindromeMy(arr2, SIZE2);
    printf("%d", result);
    return (0);
}