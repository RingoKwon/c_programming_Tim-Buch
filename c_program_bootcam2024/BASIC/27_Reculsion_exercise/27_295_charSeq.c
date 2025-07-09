#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkNum(char threshold)
{
    char input;
    printf("char_check: ");
    scanf( " %c", &input);

    if (input == '$')
        return 0;
    if (input == threshold)
        return 1 + checkNum(threshold);  // threshold 유지
    return checkNum(threshold);          // threshold 유지
}

int main()
{
    char _char;
    printf("char: ");
    scanf(" %c", &_char);
    
    printf("%d", checkNum(_char));
    return 0;
}