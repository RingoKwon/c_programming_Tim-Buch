#include <stdio.h>
#include <limits.h>
/*
1. logical shift
2. modular operator
 */
int binary_prt_logical(int n)
{
    int i;
    int dg;

    i = 0;
    while (i <= 31)
    {
        dg = (n >> (31 - i)) & 1;
        printf("%d", dg);
        i++;
    }
    return 0;
}

int binary_prt_arithmetical(int n)
{
    return 0;
}

int main(void)
{
    printf("sizeof(int) = %zu bytes\n", sizeof(int)); // %zu: size_t
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %d\n", INT_MAX);
    printf("--------------------------------\n");
    printf("%d\n", -2 >> 30 & 1);
    binary_prt_logical(3345);
    return 0;

}