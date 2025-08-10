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

int main(void)
{
    int nb;
    
    printf("enterN: ");
    scanf("%d", &nb);
    n2one(nb);
    one2n(nb);
    return 0;
}
