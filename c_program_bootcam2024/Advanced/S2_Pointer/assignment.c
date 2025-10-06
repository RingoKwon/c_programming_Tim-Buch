#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapInt(int *a, int *b)
{
    int *tmp;
    *tmp = *a;
    *a = *b;
    *b = *tmp;
}

void swapIntsNoThird1(int* a, int* b)
{
    *a = *a - *b;
    *b = *a + *b;
    *a = *b - *a;
}

void swapIntsNoThird2(int* a, int* b)
{
    *a = *a / *b;
    *b = *a * *b;
    *a = *b / *a;
}
void    genericSwap(void* a, void* b, int size)
{
    void* tmp = malloc(size);

    memcpy(tmp, a, size);
    memcpy( a, b, size);
    memcpy( b, tmp, size);

    free(tmp);
}

int main(void)
{
    int a = 1;
    int b = 0;

    printf("original: a = %d, b = %d\n", a, b);
    swapInt(&a, &b);
    printf("swapInt: a = %d, b = %d\n", a, b);
    swapIntsNoThird1(&a, &b);
    printf("swapIntsNoThird1: a = %d, b = %d\n", a, b);
    swapIntsNoThird2(&a, &b);
    printf("'genricSwap: a = %d, b = %d\n", a, b);
    genericSwap(&a, &b, 4);
    return 0;
}