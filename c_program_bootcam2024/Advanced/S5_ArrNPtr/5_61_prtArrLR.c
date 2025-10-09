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
    prtR(arr + 1, size - 1);
    printf("%d", arr[0]);
    return;
}
void prtLVlad(int* arr, int size)
{
    if (size > 0)
    {
        printf("%d", arr[0]);
        prtLVlad(arr + 1, size -1);
    }
}

void prtRVlad(int* arr, int size)
{
    if (size > 0)
    {
        prtRVlad(arr + 1, size -1);
        printf("%d", arr[0]);
    }
}

int main(void)
{
    int arr[SIZE] = {1,2,3,4,5};
    prtL(arr, SIZE);
    printf("\n------------------------\n");
    prtR(arr, SIZE);
    printf("\n------------------------\n");
    prtLVlad(arr, SIZE);
    printf("\n------------------------\n");
    prtRVlad(arr, SIZE);
    return (0);
}