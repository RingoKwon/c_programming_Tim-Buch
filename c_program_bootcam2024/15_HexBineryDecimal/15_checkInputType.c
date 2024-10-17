#include <stdio.h>

int main()
{
    char input;

    printf("Enter a char: ");
    scanf(" %c", &input);

    if (input >= 48 && input <= 57)
    {
        printf("decimal");
    }
    else if (input >= 97 && input <= 122)
    {
        printf("Lower");
    }
    else if (input >= 65 && input <= 90)
    {
        printf("upper");
    }

    // Debugger

    return 0;
}
