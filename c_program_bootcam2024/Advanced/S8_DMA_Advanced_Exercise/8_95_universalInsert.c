#include <stdio.h>
#include <stdlib.h>

void*   universalInsert(void* arr, size_t *arrSize, 
                        void* ptr, size_t idx, size_t typeSize)
{
    void* newArr = (void*)malloc((typeSize *  (*arrSize + 1)));
    size_t i;
    size_t j;
    size_t k;

    if (!newArr)
    {
        printf("Memory Allocation Failed");
        return NULL;
    }
    i = 0;
    j = 0;
    k = 0;
    while (i < (typeSize *  (*arrSize + 1)))
    {
        if (i >= (idx * typeSize) && i < ((idx + 1) * typeSize))
        {
            ((char*)newArr)[i] = ((char*)ptr)[k]; 
            i++;
            k++;
            printf("i: %zu, k: %zu\n", i, k);
        }
        else
        {
            ((char*)newArr)[i] = ((char*)arr)[j];
            i++;
            j++;
            printf("i: %zu, j: %zu\n", i, j);
        }
    }
    *arrSize = *arrSize + 1;

    return (newArr);
}


int main(void)
{
    float arr[] = {1, 2, 3};
    float* newArr;
    size_t size;
    float ptr;
    size_t i;

    size = 3;
    ptr = 1.1;

    newArr = (float*)malloc(sizeof(float) * (size + 1));
    if (!newArr)
    {
        printf("Memory Allocation Failed");
        free(newArr);
    }
    newArr = universalInsert(arr, &size, &ptr, 4, sizeof(float) );
    i = 0;
    while(i < size)
    {
        printf("%f ", newArr[i]);
        i++;
    }
    return (0);

}