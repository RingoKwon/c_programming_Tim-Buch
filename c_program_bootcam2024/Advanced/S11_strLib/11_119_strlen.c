#include <stdio.h>
#include <stdlib.h>

int strlenMy(char* str)
{
    size_t i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int main(void)
{
    char* str = "Ringo";
    printf("%s length is %d", str, strlenMy(str));
    return (0);
}