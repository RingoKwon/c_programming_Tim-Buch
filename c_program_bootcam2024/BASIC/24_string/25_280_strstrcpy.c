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
    }
    
    return tempPtr;
}

int main()
{
    char *str = "ring";
    char *newStr ; 
    char *tempResult;

    tempResult = strcpy(newStr, str);
    printf("%s", tempResult);
    return 0;
}