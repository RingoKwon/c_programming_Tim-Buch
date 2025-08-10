#include <stdio.h>

void one2n(int nb)
{
    if (nb >= 1)
    {
        one2n(nb - 1);
        printf("%d ", nb);
    }
}

int main(void)
{
    int nb;
    
    printf("enterN: ");
    scanf("%d", &nb);
    one2n(nb);
    return 0;
}
