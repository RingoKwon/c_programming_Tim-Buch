#include <stdio.h>

int cntEven(int* arr, int size)  
{
    int i;
    int cnt;

    i = 0;
    cnt = 0;
    while (i < size)
    {
        if (arr[i] % 2 == 0)
            cnt++;
    i++;
    }
    return (cnt);
}

int* createEvenOdd(int* arr, int** evenArr, int* oddArr, int* size)
{


    return (arr);
}

void prtArr(int* arr, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    int arr[] = {2, 3, 4, 5, 11, 2, 32, 4};
    int size;
    int evenSize;
    int oddSize;

    size = 8;
    prtArr(arr, size);
    evenSize = cntEven(arr, size);
    oddSize = size - evenSize; 
    printf("EvenSize: %d\n", evenSize);
    printf("OddSize: %d\n", oddSize);
    return (0);
}