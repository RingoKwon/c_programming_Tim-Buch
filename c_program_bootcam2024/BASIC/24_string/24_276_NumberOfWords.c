#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int main()
{
    char input[SIZE];
    int i = 0;
    int cnt = 1;

    fgets(input, SIZE, stdin);

    while (input[i] != '\n')
    {
        i++;
        if (input[i] == ' ')
        {
            cnt++;
        }

    }
    printf("%d", cnt);

    return 0;
}