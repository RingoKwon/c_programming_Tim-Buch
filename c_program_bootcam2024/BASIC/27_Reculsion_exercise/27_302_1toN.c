#include <stdio.h>

void one2n(int nb)
{
    if (nb >= 2)
    {
        one2n(nb - 1);
        printf("%d ", nb);
    }
}

void n2one(int nb)
{
    if (nb >= 1)
    {
        printf("%d ", nb);
        n2one(nb - 1);
    }
}

void n2one2n(int nb)
{
    if (nb == 1)
    {
        printf("%d ", 1);
    }
    else
    {
        printf("%d ", nb);
        n2one2n(nb - 1);
        printf("%d ", nb);
    }
}

int main(void)
{
    int nb;
    
    // printf("enterN: ");
    // scanf("%d", &nb);
    nb = 3;
    n2one(nb);
    one2n(nb);
    printf("\n---------------\n");
    n2one2n(nb);
    printf("\n");
    return 0;
}
