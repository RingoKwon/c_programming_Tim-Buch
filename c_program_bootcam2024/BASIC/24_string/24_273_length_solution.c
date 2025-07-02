#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int leng(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    int stringLength;
    char input[SIZE];
    fgets(input, SIZE, stdin);
    stringLength = leng(input)-1;
    printf("%d", stringLength);

    return 0;
}