#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
- struct: num, denum
- need to make same denum for addition , substraction,
*/
typedef struct rational
{
    int numerator;
    int denominator;
} Rational;

int main()
{
    Rational a1;
    a1.denominator = 2;
    a1.numerator = 3;
    printf("%f", 1.0* a1.numerator/a1.denominator);
    return 0;
}
