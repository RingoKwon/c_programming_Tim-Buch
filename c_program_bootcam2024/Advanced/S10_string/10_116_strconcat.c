#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strConcat(char* str)
{
    size_t len;
    size_t i;
    char* newStr;

    i = 0;
    while (str[i])
        i++;
    len = i;
    i = 0;
    while (i < len)
    {
        newStr = (char*)malloc(sizeof(char) * len * 2 + 1);
        if (!newStr)
        {
            printf("Memory Allocation Failed\n");
            return (NULL);
        }
        newStr[i] = str[i];
        newStr[i + len] = str[i];
        i++;
    }
    newStr[i + len] = '\n';
    return (newStr);
}

void    prtStr(char* str)
{
    size_t  i;
    while (str[i])
    {
        printf("%c", str[i]);
        i++;
    }
}

int main(void)
{
    char* str = "Ringo";
    str = strConcat(str);
    prtStr(str);
    
    return (0);
}