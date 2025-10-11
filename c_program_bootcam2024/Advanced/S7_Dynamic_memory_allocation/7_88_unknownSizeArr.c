#include <stdio.h>
#include <stdlib.h>
/*
when I realloc, if allocation fails I will lose src.
to avoid this situation, prepare a guardrail.
*/
void*   myRealloc(void* srcBlock, unsigned oldSize, unsigned newSize)
{
    char* newArr;
    unsigned smallSize;
    unsigned i;  // Changed from char to unsigned to handle large arrays
    
    // Handle special cases
    if (srcBlock == NULL)
        return malloc(newSize);  // Act like malloc if srcBlock is NULL
    
    if (newSize < oldSize)
        smallSize = newSize;
    else
        smallSize = oldSize;
    newArr = (void*)malloc(newSize);
    if (!newArr)
        return NULL;
    i = 0;
    while (i < smallSize)
    {
        newArr[i] = ((char*)srcBlock)[i];
        i++;
    }
    free(srcBlock);
    return (newArr);
}
int main(void)
{
    int* arr;
    return (0);
}