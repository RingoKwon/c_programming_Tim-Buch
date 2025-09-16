#include <stdio.h>

int positionValue(int num)
{
    int position;
    int digit;

    position = 0;
    digit = 0;
    while(num > 0)
    {
        digit = num % 10;
        printf("Digit: %d; Position: %d\n", digit, position);
        if(position % 2 != digit % 2)
            return 0;
        num /= 10;
        position++;
    }
    return 1;
}

int main(void)
{
    int output;

    output = 0;

    output = positionValue(1250);
    printf("------------------------\n");
    if(output == 1)
    {
        printf("correct");
        return 0;
    }
    printf("wroing");
    return 0;
}