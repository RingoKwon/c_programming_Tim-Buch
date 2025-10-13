#include <stdio.h>
#include <stdlib.h>

void*   universalInsert(void* arr, size_t *arrSize, 
                        void* ptr, size_t idx, size_t typeSize)
{
    void* newArr = (void*)malloc(*arrSize + typeSize);
    char i;

    if (!newArr)
    {
        printf("Memory Allocation Failed");
        free(newArr);
    }
    i = 0;
    while (i < (*arrSize + typeSize))
    {
        if (i < idx * typeSize || i >= (idx + 1) * typeSize )
        {}
        printf("%d", i);
        i++;
    }

    return (newArr);
}
int main(void)
{
    double arr[] = {1, 2, 3};
    size_t* size;
    float *ptr;

    *size = 3;
    *ptr = 1.1;
    universalInsert(arr, size, ptr, 1, sizeof(float) );
    return (0);

}