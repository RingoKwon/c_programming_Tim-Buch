#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    int arr[SIZE] = {-4, 3, 6, 3, 4};
    int i, j;

    // possipe combination ( not considering position )
    int minAbs = abs(arr[0] * arr[1]);
    for (i = 0; i < SIZE; i++)
    {

        for (j = 0; j < SIZE; j++)
        {
            
            if (arr[i] != arr[j] && minAbs > abs(arr[i] * arr[j]))
            {
                minAbs = abs(arr[i] * arr[j]); 
            }
        }
    }
    printf("%d", minAbs);
    return 0;
}