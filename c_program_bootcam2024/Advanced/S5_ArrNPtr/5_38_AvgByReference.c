#include <stdio.h>

void avg(int* a, int* b, float* avg)
{
    int sum = *a + *b;
    *avg = (float)sum/2;

}

int main(void)
{
    int a = 1;
    int b = 4;
    float result;

    avg(&a, &b, &result);
    printf("%f", result);
    return 0;
}