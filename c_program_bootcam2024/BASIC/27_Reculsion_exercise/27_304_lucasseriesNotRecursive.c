#include <stdio.h>

void    lucanotrecurs(int nb)
{
    int i;
    int out;

    i = 0;
    out = 0;
    while (i < nb)
    {
        if (i <= 0)
            out += 2;
        else if (i <= 1)
            out += 1;
        else 
            out += out;
        i++;
    }
    printf("%d", out);
}

int main(void)
{
    lucanotrecurs(3);
}