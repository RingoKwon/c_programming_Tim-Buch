#include <stdio.h>
#include <stdlib.h>

int*    createNoDuplicateArr(int* arr, int* size)
{
    int i;
    int j;
    int cnt;
    int* newArr;

    if (!arr || *size <= 0)
        return NULL;

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
        printf("Memory allocation failed\n");
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

    size = 10;
    prtArr(arr, size);
    newArr = createNoDuplicateArr(arr, &size);
    if (!newArr)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    prtArr(newArr, size);
    free (newArr);
    return (0);
}