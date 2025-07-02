#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int leng(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }

    return i;
}

int main()
{
    int stringLength;
    char input[SIZE];
    fgets(input, SIZE, stdin);
    stringLength = leng(input) ;
    printf("The length of string '%s' is %d", input, stringLength);

    return 0;
}