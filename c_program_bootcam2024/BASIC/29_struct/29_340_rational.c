#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
- struct: num, denum
- need to make same denum for addition , substraction,
- how you gonna print it? input can be different on fuctions. -> print fuction should be differ
-
*/
typedef struct rational
{
    int numerator;
    int denominator;
} Rational;

Rational increment(Rational input)
{
    input.numerator += input.denominator;
    return input;
}
Rational decrement(Rational input)
{
    input.numerator -= input.denominator;
    return input;
}
void print_single(Rational input)
{
    double float_num =1.00* input.numerator/input.denominator;
    printf("Output: %.2f(%d/%d)\n", float_num, input.numerator, input.denominator);
}

int main()
{
    Rational a1;
    a1.denominator = 2;
    a1.numerator = 3;

    Rational output_increment = increment(a1); 
    Rational output_decrement = decrement(a1); 
    print_single(output_increment);
    print_single(output_decrement);

    return 0;
}
