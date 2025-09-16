#include <stdio.h>
#include <stdbool.h>
// [Position Value]
// if position is even -> digit is even. Otherwise odd.
// ex num = 1234 -> return = 1 
// ex num = 1235 -> return = 0

int isSame(int position, int digit)
{
    if(position % 2 == digit % 2)
        return 1;
    return 0;
}
int positionValue(int num, int position)
{
    int digit;
    int cumsum;

    digit = 0;
    cumsum = 0;

    digit = num % 10;
    position++;
    if(num < 10)
    {
        printf("position: %d; digit: %d\n", position, digit);
        return cumsum;
    }
    cumsum = positionValue(num / 10, position);
    printf("position: %d; digit: %d; cumsum: %d\n", position, digit, cumsum);
    if(isSame(position, digit) == 0)
        return cumsum + 1 ;
    return cumsum;
}

bool is_odd(int i) {
    return i % 2 == 1;
}

bool recursive(int digit, bool pos) {
    if (digit < 10) return !(is_odd(digit) ^ pos);
    return !(is_odd(digit % 10) ^ pos) & recursive(digit / 10, !pos);
}

int main(void)
{
    bool ret1 = recursive( 1234, false );
    printf("out: %d", ret1);
    // positionValue(1234, -1);
    return 0;
}
