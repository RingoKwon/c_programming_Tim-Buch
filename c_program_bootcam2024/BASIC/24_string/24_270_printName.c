#include <stdio.h>
#include <stdlib.h>

int main()
{

    char firsr[] = "Ringo";
    char last[] = "Kwon";

    int i=0;
    while (firsr[i] != '\0')
    {
        printf("%c", firsr[i]);
        i++; 
    }
    printf(" ");
    i=0;
    while ( last[i] !='\0')
    {
        printf("%c", last[i]);
        i++;
    }

    return 0;
}