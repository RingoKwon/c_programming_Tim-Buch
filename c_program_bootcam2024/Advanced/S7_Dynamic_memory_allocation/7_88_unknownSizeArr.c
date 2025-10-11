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

int unknownSizeArr(int** arr)
{
    int cnt;
    int ele;

    cnt = 0;
    ele = 0;
    *arr = NULL;
    while (ele != -1)
    {
        printf("Enter Element(%d): ", cnt);
        *arr = (int*)myRealloc(*arr, sizeof(int) * cnt, sizeof(int)*(cnt + 1));
        if (!*arr)
            return 0;
        if (scanf("%d", &ele) != 1) {  // Check if scanf succeeded
            return cnt;  // EOF or invalid input - exit
        }
        if (ele == -1)
            return cnt;
        (*arr)[cnt] = ele; // becarfull *arr[i] -> (*arr)[i]
        cnt++;
    }
    // Dead code removed: return cnt - 1; (unreachable)
}

int main(void)
{
    int* arr;
    int cnt;
    int i;
    
    cnt = unknownSizeArr(&arr); 
    printf("cnt = %d\n", cnt);
    i = 0;
    while (i < cnt)
    {
        printf("%d ", arr[i]);
        i++;
    }
    free(arr);

    return (0);
}