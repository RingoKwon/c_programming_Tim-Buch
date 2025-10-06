#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void GenericSwapMemcpy(void* a, void* b, int size)
{
    void* tmp = malloc(size);
    
    memcpy(tmp, a, size);
    memcpy(a, b, size);
    memcpy(b, tmp, size);
}
void    GenericSwap(void* a, void* b) // notworking 
{
    void* tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(void)
{
    int a = 1;
    int b = 0;
    printf("Before functions: a = %d, b = %d\n", a,  b);
    GenericSwapMemcpy(&a, &b, 4);
    printf("memcpy: a = %d, b = %d\n", a,  b);
    a = 1;
    b = 0;
    GenericSwap(&a, &b);
    printf("'=': a = %d, b = %d\n", a,  b);

    return 0;
}