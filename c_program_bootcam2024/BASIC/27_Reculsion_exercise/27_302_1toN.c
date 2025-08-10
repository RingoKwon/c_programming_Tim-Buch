#include <stdio.h>

int one2n(int   nb)
{
    if (nb <= 1)
    {
        printf("%d", 1);
        return (nb);
    }
    one2n(nb - 1);
    printf("%d", nb);
    return (0);
}

int main(void)
{
    int nb;
    
    printf("enterN: ");
    scanf("%d", &nb);
    one2n(nb);
    return 0;
}
