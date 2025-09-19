#include <stdio.h>

int printchars(int total, char c1, char c2)
{
    if (total == 0)
        return 0;
    printf("%c", c1);
    printchars(total - 1, c1, c2);
    printf("%c", c2);
    printf("%c", c2);
    return 0;
}

int main(void)
{

    printchars(3, 'd', 'c');
    return 0;
}