#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{

    int arr[SIZE] = {1, 2, 3, 4, 5};
    int i, j;
    int n = 2;

    for (j = 0; j < n; j++)
    {

        int temp = arr[0];
        for (i = 0; i < SIZE - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[SIZE - 1] = temp;
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}