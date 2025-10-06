#include <stdio.h>
#define SIZE 4

void inputArr(int* arr, int size)
{
    int i;

    i = 0;
    while(i < size)
    {
        printf("Enter %dth number: ", i + 1);
        scanf("%d", &arr[i]);
        i++;
    }
}

void displayArr(int* arr, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%dth element = %d\n", i + 1, arr[i]);
        i++;
    }
}

int main(void)
{
    int arr[SIZE];
    inputArr(arr, SIZE);
    displayArr(arr, SIZE);
    return 0;
}