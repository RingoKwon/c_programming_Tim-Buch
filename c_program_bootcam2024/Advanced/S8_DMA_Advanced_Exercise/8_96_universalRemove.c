#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* universalRemove(void* arr, size_t* size, 
                    size_t idx, size_t typeSize)
{
    void* newArr;

    *size -= typeSize;
    newArr = (void*)malloc(*size);
    if (!newArr)
        {
            printf("Memory Allocation Failed");
            return NULL;
        }
    memcpy(newArr, arr, idx);
    memcpy(newArr + idx, arr + idx + typeSize, *size - idx);
    return (newArr);
}

void    prtArr(float* arr, size_t size)
{
    size_t i;

    i = 0;
    while (i < size)
    {
        printf("%f ", arr[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    float arr[] = {1.1, 2.2, 3.3, 4.4};
    size_t size;
    void* newArr;
    size_t idx;

    idx = 1 * sizeof(float);
    size = 4 * sizeof(float);
    prtArr(arr, size/sizeof(float));
    printf("after univeralRemove\n");
    newArr = universalRemove(arr, &size, idx, sizeof(float));
    prtArr((float*)newArr, size/sizeof(float));  // Fixed: use prtArr, cast to float*
    free(newArr);  // Don't forget to free!
    return (0);
}