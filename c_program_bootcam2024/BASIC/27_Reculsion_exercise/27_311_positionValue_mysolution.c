#include <stdio.h>
// [Position Value]
// if position is even -> digit is even. Otherwise odd.
// ex num = 1234 -> return = 1 
// ex num = 1235 -> return = 0

int conditionFlag(int position, int digit)
{
    if(position % 2 == digit % 2)
        return 0; 
    return 1;
}
int digitValue(int num, int position)
{
    int digit;
    int sumerr;

    digit = num % 10;
    position++;
    sumerr = 0;

    sumerr +=  conditionFlag(position, digit);
    if(num < 10)
{ 
    return sumerr;
}
    sumerr += digitValue(num / 10, position);
    return sumerr;
}

int main(void)
{
    int output;
    printf("Enter Number: \n");
    output += digitValue(432111, -1);
    printf("Output is %d", output);
}