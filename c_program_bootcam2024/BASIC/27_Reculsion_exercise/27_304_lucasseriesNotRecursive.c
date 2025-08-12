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
    lucanotrecurs(5);
}