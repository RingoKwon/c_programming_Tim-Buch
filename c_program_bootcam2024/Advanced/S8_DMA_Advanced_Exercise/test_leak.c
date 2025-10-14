#include <stdio.h>
#include <stdlib.h>

void*   universalInsert(void* arr, size_t *arrSize, 
                        void* ptr, size_t idx, size_t typeSize)
{
    void* newArr = malloc(typeSize * (*arrSize + 1));
    size_t i, j, k;

    if (!newArr)
        return NULL;
    
    i = 0;
    j = 0;
    k = 0;
    while (i < (typeSize * (*arrSize + 1)))
    {
        if (i >= (idx * typeSize) && i < ((idx + 1) * typeSize))
        {
            ((char*)newArr)[i] = ((char*)ptr)[k]; 
            i++;
            k++;
        }
        else
        {
            ((char*)newArr)[i] = ((char*)arr)[j];
            i++;
            j++;
        }
    }
    *arrSize = *arrSize + 1;
    return newArr;
}

int main(void)
{
    float arr[] = {1, 2, 3};
    float* newArr;
    size_t size = 3;
    float ptr = 1.1;

    // ❌ THIS CAUSES A MEMORY LEAK:
    newArr = malloc(sizeof(float) * (size + 1));  // Allocate 16 bytes
    if (!newArr)
    {
        printf("Memory Allocation Failed\n");
        return 1;
    }
    
    printf("First allocation: newArr = %p\n", (void*)newArr);
    
    // This OVERWRITES newArr, losing the pointer to first allocation
    newArr = universalInsert(arr, &size, &ptr, 3, sizeof(float));
    
    printf("Second allocation: newArr = %p\n", (void*)newArr);
    printf("Output: ");
    
    for (size_t i = 0; i < size; i++)
        printf("%.1f ", newArr[i]);
    printf("\n");
    
    free(newArr);  // Only frees second allocation!
    // First allocation at original newArr is LEAKED!
    
    return 0;
}
