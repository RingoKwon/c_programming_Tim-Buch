#include <stdio.h>
#define SIZE 5

int smallest(int* arr, int size)
{
    int i;
    int min;

    i = 1;
    min = arr[0];
    while (i < size)
    {
        if (min > arr[i])
            min = arr[i];
        i++;
    }
    return min;
}

int findSecondSmall(int* arr, int size)
{
    int i;
    int min;
    int min2nd;

    min = smallest(arr, size);
    i = 0;
    while (i < size)
    {
        if (arr[i] != min)
            {
                min2nd = arr[i];
                break;
            }
        i++;
    }
    
    // Handle case where all elements are the same
    if (i == size)
    {
        printf("Error: All elements are the same. No second smallest exists.\n");
        return min; // or return -1 to indicate error
    }
    
    i = 0;
    while (i < size)
    {
        if ( arr[i] > min && arr[i] < min2nd)
        {
            min2nd = arr[i];
        }
        i++;
    }
    return min2nd;
}

int main(void)
{
    int arr[SIZE] = {1,2,3,4,5};
    printf("min %d\n", smallest(arr, SIZE));
    printf("2nd min %d\n", findSecondSmall(arr, SIZE));
    return (0);
}