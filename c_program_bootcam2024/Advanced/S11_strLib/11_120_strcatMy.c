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

void strcatMy(char** dest, char* src)
{
    size_t destLen;
    size_t srcLen;
    size_t  newLen;
    size_t i;
    char*   newStr;

    destLen = strlenMy(*dest);
    srcLen = strlenMy(src);
    newLen = destLen + srcLen;
    newStr = (char*)malloc(sizeof(char) * (newLen + 1)) ;
    i = 0;
    while (i < destLen)
    {
        newStr[i] = (*dest)[i];
        i++;
    }
    while (i < newLen)
    {
        newStr[i] = src[i - destLen];
        i++;
    }
    newStr[i] = '\0';
    *dest = newStr;
}

int main(void)
{
    char*   src = "Ringo";
    char*   dest = "Hello ";
    printf("%d\n", strlenMy(src));
    strcatMy(&dest, src);
    printf("%s", dest);
    return (0);
}