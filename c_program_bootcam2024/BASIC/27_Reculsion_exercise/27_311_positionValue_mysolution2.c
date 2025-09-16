#include <stdio.h>
// [Position Value]
// if position is even -> digit is even. Otherwise odd.
// ex num = 1234 -> return = 1 
// ex num = 1235 -> return = 0

int positionValue(int num, int position)
{
    int digit;

    digit = 0;

    digit = num % 10;
    position++;
    if(num < 10)
    {
        printf("position: %d; digit: %d\n", position, digit);
        return 1;
    }
    positionValue(num / 10, position);
    printf("position: %d; digit: %d\n", position, digit);
    return 1;
}

int main(void)
{
    positionValue(2233, -1);
    return 0;
}
