// void reverse recursive 
#include <stdio.h>


int main(void)
{
    char* str;
    char strArr[4] = "dddd";
    char strArr2[3] = {'a', 'a', 'a'}; // 

    str = "ringo";

    int  i;
    i = 0;
    while (str[i])
    {
        printf("%c\n", str[i]);
        i++;
    }
    printf("-----------------\n");
    i = 0;
    while (strArr[i])
    {
        printf("%c\n", strArr[i]);
        i++;
    }
    printf("-----------------\n");
    i = 0;
    while (strArr2[i])
    {
        printf("%c\n", strArr2[i]);
        i++;
    }

    return (0);
}