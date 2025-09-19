#include <stdio.h>

int seqDouble(int total, char c)
{
    if (total == 0)
        return 0;
    printf("%c", c);
    seqDouble(total - 1, c);
    printf("%c", c - 'a' + 'A');
    return 0;
}

int main(void)
{
    seqDouble(3, 'a');
    return 0;
}