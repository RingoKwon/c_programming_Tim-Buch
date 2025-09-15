#include <stdio.h>
// [Position Value]
// if position is even -> digit is even. Otherwise odd.
// ex num = 1234 -> return = 1 
// ex num = 1235 -> return = 0

int positionValue(int num, int position)
{
    int digit;

    position++;
    if(digit < 10)
        return digit;
    positionValue(num / 10, position);
    digit = num % 10;
    position--;
    printf("p: %d\n", position);
    printf("d: %d\n", digit);
    printf("--------------\n");
    return digit;
}

int main(void)
{
    positionalue(2233, -1);
    return 0;
}
