#include <stdio.h>
#define SIZE 3

int sortMy(float* arr, int size)
{
    if (size == 1)
        return 1;
    int intPart1;
    int intPart2;
    float fracPart1;
    float fracPart2;
    
    intPart1 = arr[0] / 1;
    fracPart1 = arr[0] - intPart1;
    intPart2 = arr[1] / 1;
    fracPart2 = arr[1] - intPart2;
    // printf("i1: %d, f1: %f\n", intPart1, fracPart1);
    if (!(intPart1 < intPart2 && fracPart1 > fracPart2))
        return 0; 
    return sortMy(arr + 1, size - 1);
}

int main(void)
{
    float arr[SIZE] = {1.23, 2.22, 3.20};
    int res;

    res = sortMy(arr, SIZE);
    printf("%d", res);
    return (0);
}