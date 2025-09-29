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

int main(void)
{
    binary_prt_logical(-100);
    return 0;

}