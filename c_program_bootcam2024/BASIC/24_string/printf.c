
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char first[] = "ringo";
    int i = 0;
    while (first[i] != '\0')
    {
        printf("%c", first[i]); /* code */
        i++;
    }
}