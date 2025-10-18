#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    strcpyMy(char* dest, char* src)
{
    size_t i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main(void)
{
    char str[7] = "ringo";
    char str2[10];

    strcpyMy(str2, str);
    printf("%s\n", str2);

    return (0);
}