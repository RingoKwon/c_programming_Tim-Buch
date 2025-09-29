#include <stdio.h>
#include <math.h>
#include <limits.h>
/*
1. logical shift
2. modular operator
 */
int binary_prt_logical(int n)
{
    int i;
    int dg;
    int byt;

    i = 0;
    byt = sizeof(int) * 8 - 1;
    while (i <= byt)
    {
        dg = (n >> (byt - i)) & 1;
        printf("%d", dg);
        if (i % 8 == 7 && i != byt)
        {
            printf(" |");
        }
        if (i % 4 == 3 && i != byt)
        {
            printf(" ");
        }
        i++;
    }
    printf("\n");
    return 0;
}
int binary_digits(int n)
{
    int i;
    int p;

    i = 0;
    while (pow(2, i) <= n)
    {
        // printf("(%d)", (int)pow(2,i));
        i++;
    }
    if (n == 0)
        i = 0;
    else 
        i -= 1;
    printf("n: %d\n", n);
    printf("d: %d\n", i);
    printf("\n");
    return 0;
}
int binary_prt_arithmetical(int n)
{
    if (n < 2)
        printf("%d", n % 2);
    printf("\n");
    return 0;
}

int main(void)
{
    printf("sizeof(int) = %zu bytes\n", sizeof(int)); // %zu: size_t
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %d\n", INT_MAX);
    printf("--------------------------------\n");
    printf("%d\n", -2 >> 30 & 1);
    binary_prt_logical(INT_MIN);
    binary_prt_arithmetical(INT_MIN);
    binary_digits(0);
    return 0;

}