/*
Arr has element which value equals to the sum of both its neigbors.
ex1 - [1,4,7,3,2] -> 1 
ex2 - [1,4,1,4,2] -> 0
*/
#include <stdio.h>
#define SIZE 5

int neighbor(int* arr, int size)
{
    int i;
    
    i = 1;
    while (i < size - 1)
    {
        if (arr[i] == (arr[i - 1] + arr[i + 1]))
            return 1;
        i++;
    }
    return 0;
}

int main(void)
{
    int arr[SIZE] = {1,4,7,3,2};
    int result;

    result = neighbor(arr, SIZE);
    if (result == 1)
        printf("have");
    else
        printf("don't have");
    return 0;
}