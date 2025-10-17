#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void   allocate2DMatrixByRef(int*** arr)
{
    *arr = (int**)calloc(3, sizeof(int*));
}

int main(void)
{
    int** arr;

    allocate2DMatrixByRef(&arr);
    free(arr);
    return (0);
}