#include <stdio.h>
#include <stdlib.h>
void func()
{
    char word[100];

    printf("%s", "enter: ");
    scanf("%s", word);

    int i = 0;
    while (word[i] != '\0')
    {
        i++;
    }
    printf("length: %d", i);
}

int main()
{
    func(); 
    return 0;
}