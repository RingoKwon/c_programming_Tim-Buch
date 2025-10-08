#include <stdio.h>
#define SIZE 5

void prtFreqElement(int* arr, int size)
{
    int i;
    int j;
    int cnt;
    int is_unique;

    i = 0;
    while (i < size)
    {
        j = 0;
        while (j < i)
        {
            printf("i: %d(%d), j: %d(%d)\n", i, arr[i],j, arr[j]);
            j++;
        }
        i++;
    }
}

int main(void)
{
    int arr[SIZE] = {1,2,2,3,3};
    prtFreqElement(arr, SIZE);
    return (0);
}