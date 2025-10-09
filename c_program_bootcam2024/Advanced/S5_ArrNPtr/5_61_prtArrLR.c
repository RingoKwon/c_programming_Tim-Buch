#include <stdio.h>
#define SIZE 5

void prtL(int* arr, int size)
{
    if (size == 0)
        return;
    printf("%d", arr[0]);
    prtL(arr + 1, size - 1);
    return;
}

void prtR(int* arr, int size)
{
    if (size == 0)
        return;
    printf("%d", arr[size - 1]);
    prtL(arr, size - 1);
    return;
}

int main(void)
{
    int arr[SIZE] = {1,2,3,4,5};
    prtL(arr, SIZE);
    printf("\n------------------------\n");
    prtR(arr, SIZE);
    return (0);
}