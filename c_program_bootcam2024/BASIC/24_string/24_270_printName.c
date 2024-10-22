#include <stdio.h>
#include <stdlib.h>

int main()
{

    char firsr[] = "Ringo";
    char last[] = "Kwon";

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%c", firsr[i]);
    }
    printf(" ");
    for (i = 0; i < 5; i++)
    {
        printf("%c", last[i]);
    }

    return 0;
}