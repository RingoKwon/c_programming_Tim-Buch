#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str1 = "ringo";
    // int *str2 = "ringo";
    int str2 = &"ringo";

    printf("%s\n", str1);
    printf("%c\n", *str1);
    printf("%c\n", *(str1 + 1));
    printf("%c\n", str1[3]);
    // printf("%c\n", *str1[3]); // error

    int i = 0 ; 
    while (str1[i] != '\0')
    {
        printf("%d", i);
        printf("%c\n", str1[i]);
        i++; 
    }

    return 0;
}