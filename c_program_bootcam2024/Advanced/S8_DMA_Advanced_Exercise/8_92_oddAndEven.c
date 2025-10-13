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

void createEvenOddRef(int* arr, int** evenArr, int* evenSize, int** oddArr, int* oddSize, int size)
{
    *evenSize = cntEven(arr, size);
    *oddSize = size - *evenSize;

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
    return (0);
}