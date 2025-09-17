#include <stdio.h>
#include <stdbool.h>
// [Position Value]
// if position is even -> digit is even. Otherwise odd.
// ex num = 1234 -> return = 1 
// ex num = 1235 -> return = 0
bool    isEven(int num)
{
    if(num % 2 == 0)
        return 1;
    return 0;
}
bool    isValid(int num, int position)
{
    int digit;

    position++;
    digit = num % 10;
    if(num < 10)
        return !(isEven(num) ^ isEven(position));
    return !(isEven(digit) ^ isEven(position)) * isValid(num / 10, position);
}

int main(void)
{
    int input;
    printf("Enter Number: ");
    scanf("%d", &input);
    printf("output is %d\n", isValid(input, -1));
}