#include <stdio.h>
#include <stdlib.h>


int main()
{
    char word[100];
    printf("%s", "enter: ");
    scanf("%s", word);

    int i = 0;
    while (word[i] != '\0')
    {
        i++;
    }
    printf("%d", i);

    return 0;
}