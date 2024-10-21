#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{

    int arr[SIZE] = {1, 2, 2, 4, 5};
    int i;

    int perviouVal = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        if (perviouVal >= arr[i])
        {
            printf("not");
            break;
        }
        else if (perviouVal == arr[i])
        {
            printf("quite");
            break;
        }else 
        {
            perviouVal = arr[i];
        }
    }
    printf("very");

    return 0;
}