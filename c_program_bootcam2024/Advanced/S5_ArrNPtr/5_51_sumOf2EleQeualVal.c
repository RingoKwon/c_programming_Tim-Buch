#include <stdio.h>
#define SIZE 5

int checkConMy(int* arr, int val, int* idx1, int* idx2)
{
    int i;
    int j;

    i = 0;
    while (i < SIZE)
    {
        j = i + 1;
        while (j < SIZE )
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
    return (0);
}

int main(void)
{
    int arr[SIZE] = {1,2,3,4,5};
    int val = 7;
    int result;
    int idx1;
    int idx2;

    result = checkConMy(arr, val, &idx1, &idx2);
    printf("Result: %d,  %d + %d", result, arr[idx1],  arr[idx2]);
    return (0);
}