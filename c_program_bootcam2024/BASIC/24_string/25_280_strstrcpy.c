#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
char *strcpy(char *destination, char *source)
{
    char *tempPtr;
    tempPtr = destination;

    int i = 0;
    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';

    return tempPtr;
}

int main()
{
    char *str = "ring";
    char newStr[30];
    char *tempResult;

    tempResult = strcpy(newStr, str);
    printf("%s\n", tempResult);
    printf("%s\n", newStr);
    return 0;
}