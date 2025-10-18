#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char    charArr[] = {'H', 'e', 'l', 'l', 'o', '\n'};

    char    str[] = "Hello";

    char*   str2 = "Hello"; // --> read only memory

    char*   tempPtr;
    tempPtr = charArr;
    tempPtr[0] = 'R';
    printf("#1\n\n");
    printf("charArr[]: %s", charArr);
    printf("tempPtr: %s", tempPtr);
    printf("----------\n#2 *str\n\n");
    printf("str[]: %s", str);
    // str = "ggg";// not assignable;
    str[0] = 'g';
    printf("-> %s", str);
    printf("\n----------\n#3 str[]\n\n");
    str2 = "yellow";
    printf("*str2 = \"yelloe\": %s", str2);
    // str2[0] = 'H'; bus error;
    
    return (0);
}