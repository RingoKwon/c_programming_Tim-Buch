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
Rational sub(Rational input1, Rational input2)
{
    Rational output;
    output.denominator = input1.denominator * input2.denominator;
    output.numerator = (input1.numerator * input2.denominator) -
                       (input1.denominator * input2.numerator);
    return output;
}

Rational multiply(Rational input1, Rational input2)
{
    Rational output;
    output.numerator = input1.numerator * input2.numerator;
    output.denominator = input1.denominator * input2.denominator;
    return output; 
}

char* compare(Rational input1, Rational input2)
{
    int cross1 = input1.numerator * input2.denominator;
    int cross2 = input2.numerator * input1.denominator;
    
    if (cross1 == cross2) return "equal";
    if (cross1 > cross2) return "input1 bigger";
    return "input1 smaller";
}

Rational division(Rational input1, Rational input2)
{
    Rational output;
    output.numerator = input1.numerator * input2.denominator;
    output.denominator = input1.denominator * input2.numerator;
    return output; 
}

//  print
void print_single(Rational input)
{
    double float_num = 1.00 * input.numerator / input.denominator;
    printf("Output: %.2f(%d/%d)\n", float_num, input.numerator, input.denominator);
}
// print double factor

int main()
{
    Rational a1;
    a1.denominator = 2;
    a1.numerator = 3;
    Rational a2;
    a2.denominator = 4;
    a2.numerator = 2;

    printf("in1: %d/%d, in2: %d/%d\n", a1.numerator, a1.denominator, a2.numerator, a2.denominator);

    Rational output_increment = increment(a1);
    Rational output_decrement = decrement(a1);
    printf("increment, decrement\n");
    print_single(output_increment);
    print_single(output_decrement);

    printf("addition, subtraction\n");
    Rational out_add = add(a1, a2);
    print_single(out_add);
    Rational out_sub = sub(a1, a2);
    print_single(out_sub);
    
    printf("multiplication, division\n");
    Rational out_mul = multiply(a1, a2);
    print_single(out_mul);
    Rational out_div = division(a1, a2);
    print_single(out_div);

    printf("comparison\n");
    printf("%s", compare(a1,a2));
    return 0;
}
