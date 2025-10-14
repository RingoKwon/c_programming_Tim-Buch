#include <stdio.h>
#include <stdlib.h>

void*   universalInsert(void* arr, size_t *arrSize, 
                        void* ptr, size_t idx, size_t typeSize)
{
    void* newArr = (void*)malloc((typeSize *  (*arrSize + 1)));
    char i;

    if (!newArr)
    {
        printf("Memory Allocation Failed");
        return NULL;
    }
    i = 0;
    while (i < (typeSize *  (*arrSize + 1)))
    {
        if (i < idx * typeSize || i >= (idx + 1) * typeSize )
        {}
        printf(" %d", i);
        i++;
    }

    return (newArr);
}
int main(void)
{
    float arr[] = {1, 2, 3};
    size_t size;
    float ptr;

    size = 3;
    ptr = 1.1;
    universalInsert(arr, &size, &ptr, 1, sizeof(float) );
    return (0);

}