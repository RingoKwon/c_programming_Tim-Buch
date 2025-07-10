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

// function
//  single factor fuction
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
// tow factor function
Rational add(Rational input1, Rational input2)
{
    Rational output;
    output.denominator = input1.denominator * input2.denominator;
    output.numerator = (input1.numerator * input2.denominator) +
                       (input1.denominator * input2.numerator);
    return output;
}

//  print
void print_single(Rational input)
{
    double float_num = 1.00 * input.numerator / input.denominator;
    printf("Output: %.2f(%d/%d)\n", float_num, input.numerator, input.denominator);
}
// print double factor 
void print_double(Rational in1, Rational in2 )
{
    printf("in2 %d/%d, in2 %d/%d\n", in1.numerator, in1.denominator, in2.numerator, in2.denominator);
}

int main()
{
    Rational a1;
    a1.denominator = 2;
    a1.numerator = 3;
    Rational a2; 
    a2.denominator = 4; 
    a2.numerator = 7; 
    

    
    Rational output_increment = increment(a1);
    Rational output_decrement = decrement(a1);
    print_single(output_increment);
    print_single(output_decrement);

    Rational



    return 0;
}
