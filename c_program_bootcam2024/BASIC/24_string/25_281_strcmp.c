#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// #include <string.h>

char lower(char input ) {
    if(input >= 65 && input <= 90)
    input = input +32; 
    // upper to lower 
    return input;
}
int strcmp(char *cmp1, char *cmp2)
{

    return 0;
}

int main()
{
    bool a;
    char b;
    a = 'D' == 69;
    printf("%d", a);
    b = lower('S');
    printf("%c",b);
    
    return 0;
}