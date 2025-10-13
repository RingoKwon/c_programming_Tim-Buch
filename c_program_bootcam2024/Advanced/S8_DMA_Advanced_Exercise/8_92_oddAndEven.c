#include <stdio.h>
#include <stdlib.h>

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

void createEvenOddRef(int* arr, int** evenArr, int* evenSize, int** oddArr, int* oddSize, int size)
{
    int i;
    int j;
    int k;
    if (size <= 0)
        printf("Invalid Size");
    *evenSize = cntEven(arr, size);
    *oddSize = size - *evenSize;
    *evenArr = (int*)malloc(sizeof(int) * *evenSize);
    *oddArr = (int*)malloc(sizeof(int) * *oddSize);
    i = 0;
    j = 0;
    k = 0;
    while (i < size)
    {
        if (arr[i] % 2 == 0)
        { 
            (*evenArr)[j] = arr[i];
            j++;
        }
        else 
        {
            (*oddArr)[k] = arr[i];
            k++;
        }
        i++;
    }
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
    int *evenArr;
    int *oddArr;

    size = 8;
    prtArr(arr, size);
    createEvenOddRef(arr, &evenArr, &evenSize, &oddArr, &oddSize, size);
    printf("EvenSize: %d\n", evenSize);
    printf("OddSize: %d\n", oddSize);
    prtArr(evenArr, evenSize);
    prtArr(oddArr, oddSize);
    return (0);
}