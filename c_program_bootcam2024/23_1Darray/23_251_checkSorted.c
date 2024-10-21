#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{

    int arr[SIZE] = {1, 2, 3, 40, 40};
    int i, flag = 0;

    int perviouVal = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        if (perviouVal >= arr[i])
        {
            if (perviouVal == arr[i])
            {
                printf("quite");
                flag = 1;
                break;
            }
            {
                printf("not");
                flag = 1;
                break;
            }
        }
        else
        {
            perviouVal = arr[i];
        }
    }
    if (flag == 0)
        printf("very");

    return 0;
}