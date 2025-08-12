#include <stdio.h>

void    lucanotrecurs(int nb)
{
    int i;
    int new;
    int prev;
    int curr;

    new = 0;
    prev = 2;
    curr = 1;
    i = 1;
    if (nb == 1)
    {
        printf("%d", curr);
        return ;
    }
    else if (nb == 0)
    {
        printf("%d", prev);
        return ;
    }
    else if ( nb < 0 )
        return ;
    while (i < nb)
    {
        new = prev + curr;
        prev = curr;
        curr =new;
        i++;
    }
    printf("%d", curr);
}


int main(void)
{
    lucanotrecurs(11);
}