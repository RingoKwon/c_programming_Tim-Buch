#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
    int *a;
    a = (int*)malloc(sizeof(int) * SIZE);
    printf("%p", a);
    a = a + 1;
    free(a - 1);
    return (0);
}