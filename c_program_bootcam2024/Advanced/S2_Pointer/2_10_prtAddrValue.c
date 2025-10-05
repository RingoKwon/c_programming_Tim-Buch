#include <stdio.h>

int main(void)
{
    int a = 1;
    int b = 2;
    int *p = &a;

    printf("value a: %d, add a: %p\n", a, &a);
    printf("value p: %p, add p: %p\n", p, &p);
    printf("Dereferencing p(*P): %d\n", *p);
    printf("value b: %d, add b: %p\n", b, &b);

    return 0;
}