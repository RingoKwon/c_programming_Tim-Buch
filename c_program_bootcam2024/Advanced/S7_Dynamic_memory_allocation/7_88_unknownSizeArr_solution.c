#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    printArr(int* arr, int size);
int*    unkwonSizeArre(int* arrsize);

int main(void)
{
    int size; 
    int* arr;

    arr = unkwonSizeArre(&size);
    printf("Size: %d\n", size);
    printArr(arr, size);
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
    // free(tmp);
    return arr;
}
