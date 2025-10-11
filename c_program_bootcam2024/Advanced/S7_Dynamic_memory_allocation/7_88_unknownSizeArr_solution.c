#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    printArr(int* arr, int size);
int*    unkwonSizeArre(int* arrsize);
int*    unkwonSizeArreOptimized(int* arrsize);

int main(void)
{
    int size; 
    int* arr;

    printf("Normal\n");
    arr = unkwonSizeArre(&size);
    printf("Size: %d\n", size);
    printArr(arr, size);
    free(arr);  // ✅ Free first array
    printf("------------------\n");
    printf("Optimized\n");
    arr = unkwonSizeArreOptimized(&size);
    printf("Size: %d\n", size);  // ✅ Print size
    printArr(arr,size);
    free(arr);
    return (0);
}

void printArr(int* arr, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%d", arr[i]);
        i++;
    }
    printf("\n");
}

int*    unkwonSizeArre(int* arrsize)
{
    int* arr;
    int* tmp;
    int ele;

    *arrsize = 0;
    arr = NULL;
    tmp = NULL;
    printf("Enter element: ");
    scanf("%d", &ele);
    while (ele != -1)
    {
        (*arrsize)++;  // Increment FIRST
        tmp = (int*)realloc(arr, sizeof(int) * (*arrsize));
        if (!tmp) {
            free(arr);  // Free existing memory before returning NULL
            return NULL;
        }
        arr = tmp;
        arr[(*arrsize) - 1] = ele;  // Use correct index
        printf("Enter element: ");
        scanf("%d", &ele);
    }
    // free(tmp);// NAVER DO THAT!
    return arr;
}

int*    unkwonSizeArreOptimized(int* arrsize)
{
    int* arr;
    int* tmp;
    int ele;
    int lastIdx;

    *arrsize = 1;
    lastIdx = 0;
    arr = NULL;
    tmp = NULL;
    printf("Enter element: ");
    scanf("%d", &ele);

    arr = (int*)malloc(sizeof(int) * 1);
    if (!arr)
        return NULL;
    while (ele != -1)
    {
        if (*arrsize == lastIdx)
        {
            (*arrsize) *= 2;
            tmp = (int*)realloc(arr, sizeof(int) * (*arrsize));
            if (!tmp)
                {
                    free(arr);
                    return NULL;
                }
            arr = tmp;
        }
        // (*arrsize)++;  // Increment FIRST
        lastIdx++;

        arr[(lastIdx) - 1] = ele;  // Use correct index
        printf("Enter element: ");
        scanf("%d", &ele);
    }
    // free(tmp);// NAVER DO THAT! it remove arr too, pointing same memory block
    *arrsize = lastIdx;  // ✅ CRITICAL: Return actual element count!
    tmp = (int*)realloc(arr, sizeof(int) * lastIdx);
    if (!tmp) {
        // Realloc failed, but arr is still valid - just return it with extra capacity
        return arr;
    }
    return tmp;
}
