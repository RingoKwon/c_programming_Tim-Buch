#include <stdio.h>

void    swap(int *a, int *b)
{
    int *tmp;
    *tmp = *a;
    *a = *b;
    *b = *tmp;
}

int main(void)
{
    int a = 1;
    int b = 0;
    printf("a: %d\nb: %d\n", a, b);
    swap(&a, &b);
    printf("swap\n");
    printf("a: %d\nb: %d\n", a, b);

    return 0;
}