#include <stdio.h>
#include <stdlib.h>

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

int main(void)
{
    double arr[] = {1.1, 2.2, 3.3};  // Changed from double* to double[]
    size_t size;
    double *arr2;
    
    arr2 = (double*)malloc(sizeof(double) * 3);
    if (!arr2)
    {
        fprintf(stderr, "Memory allocation Failed\n");
        return 1;  // Return error code (non-zero)
    }

    
    size = 3;
    prtArr(arr, size);
    return (0);
}