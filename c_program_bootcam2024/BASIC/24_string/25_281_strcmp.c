#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// #include <string.h>

char lower(char *input)
{
    int i = 0; 
    char output[300];

    while (input[i] != '\0')
    {
        /* code */
        if (input[i] >= 65 && input[i] <= 90)
            output[i] = input[i] + 32;
        i++; 
        // upper to lower
    }
    return *output;
}
int strcmp(char *cmp1, char *cmp2)
{

    return 0;
}

int main()
{
    bool a;
    char b[300];
    a = 'D' == 69;
    printf("%d", a);
    b = lower('Sdd');
    printf("%s", b);

    return 0;
}