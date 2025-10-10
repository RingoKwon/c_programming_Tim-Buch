#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float* arr1 = (float*)malloc(sizeof(float) * 3);
    float* arr2 = (float*)malloc(sizeof(float) * 3);
    
    printf("arr1 address: %p\n", (void*)arr1);
    printf("arr2 address: %p\n", (void*)arr2);
    
    // Initialize arr2
    arr2[0] = 10.0; arr2[1] = 20.0; arr2[2] = 30.0;
    
    printf("Before overflow - arr2: [%.1f, %.1f, %.1f]\n", 
           arr2[0], arr2[1], arr2[2]);
    
    // Buffer overflow - writing beyond arr1's bounds
    arr1[0] = 1.0; arr1[1] = 2.0; arr1[2] = 3.0;
    arr1[3] = 999.0;  // OUT OF BOUNDS! Might overwrite arr2[0]
    
    printf("After overflow - arr2: [%.1f, %.1f, %.1f]\n", 
           arr2[0], arr2[1], arr2[2]);
    
    free(arr1);
    free(arr2);
    return 0;
}