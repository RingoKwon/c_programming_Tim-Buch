#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

double avgMy(int* arr, int size)
{
    double sum;
    
    if (size == 0)
    {
        return (0);
    }
    sum = (1.00 * avgMy(arr + 1, size - 1)*(size -1) + arr[0])/(size);
    return sum;
}
int main(void)
{
    int arr[SIZE] = {2,2,3,4,5};
    double  res;

    res = avgMy(arr, SIZE);
    printf("%f", res);

    return (0);
}