#include <stdio.h>
#include <stdlib.h>

int*    createNoDuplexArr(int* arr, int* size)
{
    int i;
    int j;
    int cnt;
    int* newArr;

    cnt = 1;
    i = 0;
    while (i < *size - 1)
    {
        if (arr[i] == arr[i + 1])
            cnt++;
    }
    newArr = (int*)malloc(sizeof(int) * cnt);
    if (!newArr)
        return NULL;
    while (i < *size - 1)
    {
        if (newArr[i] != arr[i + 1])
            j++;
            newArr[j] = arr[i];
        i++;
    }
    newArr[j] = arr[i];
    *size = cnt;

    return (newArr);
}

void prtArr(int* arr, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf(" %d", arr[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    int arr[] = {1,1,2,3,3,3,4,5,6,6};
    int *newArr;
    int size;
    int i;

    size = 10;
    i = 0;
    prtArr(arr, size);
    newArr = createNoDuplexArr(arr, &size);
    prtArr(newArr, size);
    
}