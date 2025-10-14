#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    prtArr(double* arr, size_t size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%f ", arr[i]);
        i++;
    }
    printf("\n");  // Added newline
}
// all size based on bytes
void*   universalInsertVlad(void* arr, size_t* size,
                            void* ptr, size_t idx, size_t ptrSize)
{
    char*   newArr;

    newArr = (char*)malloc(*size + ptrSize);
    memcpy(newArr, arr, idx);
    memcpy(newArr + idx, ptr, ptrSize);
    memcpy(newArr + (idx + ptrSize), arr + idx, *size);

    *size += ptrSize;
    return (newArr);
}

int main(void)
{
    double arr[] = {1.1, 2.2, 3.3};  // Changed from double* to double[]
    size_t size;
    double* arr2;
    double* newArr;
    double src;

    src = 9.99;
    arr2 = (double*)malloc(sizeof(double) * 3);
    if (!arr2)
    {
        fprintf(stderr, "Memory allocation Failed\n");
        // return 1;  // Return error code (non-zero)
    }
    size = sizeof(double) * 3;
    prtArr(arr, 3);
    // memcpy;
    memcpy(arr2 + 1, arr, sizeof(double) * 1);
    printf("memcpy\n");
    prtArr(arr2, 3);
    free(arr2);
    printf("universalInsert\n");
    newArr = universalInsertVlad(arr, &size, &src, sizeof(double) * 1, sizeof(double));
    prtArr(newArr, size / sizeof(double));
    free(newArr);
    return (0);
}