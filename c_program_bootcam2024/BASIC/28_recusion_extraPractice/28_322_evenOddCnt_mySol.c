#include <stdio.h>
// input: int num, int digit 
// output: 
//  - 1: if the count of 'digit' occurences in num is even.
//  - 0; otherwise (if the numver of 'digit' occurenves is odd).
//  for example
//  num = 124, digit = 2 --> 0 
//  num = 12342, difit = 2 --> 1
int cntDigit(int num, int digit)
{
    if (num < 10)
        return num == digit;
    return (num % 10 == digit) + cntDigit(num / 10, digit);
}

int validation(int num, int digit)
{
    int digitCntNum;

    digitCntNum = cntDigit(num, digit); 
    printf("digitCntNum: %d\n", digitCntNum);
    if (digitCntNum % 2 == 0)
        return 1;
    return 0;
}

int main(void)
{
    int output;
    output =  validation(1223334444, 4);
    printf("Answer is ");
    printf("%d\n", output);
    return 0;
}