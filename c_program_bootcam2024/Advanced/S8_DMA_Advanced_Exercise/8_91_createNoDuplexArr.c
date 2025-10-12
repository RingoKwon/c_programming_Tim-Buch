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
    j = 0;
    while (i < *size - 1)
    {
        if (arr[i] != arr[i + 1])
            cnt++;
        i++;
    }
    newArr = (int*)malloc(sizeof(int) * cnt);
    if (!newArr)
    {
        printf("Memory allocation failed");
        return NULL;
    }
    i = 0;  
    while (i < *size - 1)
    {
        if (arr[i] != arr[i + 1])
        {
            newArr[j] = arr[i];
            j++;
        }
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
    free (newArr);
}