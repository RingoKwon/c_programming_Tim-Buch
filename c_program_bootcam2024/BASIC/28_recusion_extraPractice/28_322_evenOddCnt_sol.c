#include <stdio.h>
// input: int num, int digit 
// output: 
//  - 1: if the count of 'digit' occurences in num is even.
//  - 0; otherwise (if the numver of 'digit' occurenves is odd).
//  for example
//  num = 124, digit = 2 --> 0 
//  num = 12342, difit = 2 --> 1
int digitEvenAppearance(int num, int digit)
{
    int resultSoFar;

    if (num < 10)
    {
        if (num == digit)
            return 0; // odd
        return 1; //even
    }
    resultSoFar = digitEvenAppearance(num / 10, digit);
    if (resultSoFar == 1) 
    {
        if (num % 10 == digit)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else 
    {
        if (num % 10 == digit)
        {
            return 1;
        }
        else
        {
            return 0;
        } 
    }
}

int main(void)
{
    int output;
    output = digitEvenAppearance(111223333, 3);
    printf("out: %d", output);
    return 0;
}