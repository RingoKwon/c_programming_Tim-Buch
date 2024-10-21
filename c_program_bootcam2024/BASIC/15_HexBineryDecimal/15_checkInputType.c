#include <stdio.h>

int main()
{
    char input;

    printf("Enter a char: ");
    scanf(" %c", &input);

    if (input >= '0'&& input <= '9')
    {
        printf("decimal");
    }
    else if (input >= 'a' && input <= 'z')
    {
        printf("Lower");
    }
    else if (input >= 'A' && input <= 'Z')
    {
        printf("upper");
    }

    // Debugger

    return 0;
}
