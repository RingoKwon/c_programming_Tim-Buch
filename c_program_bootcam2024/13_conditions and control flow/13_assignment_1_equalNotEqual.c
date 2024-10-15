#include <stdio.h>
#include <stdlib.h>
// Write a program that reads from the user 2 values of an "integer" type.
// The program should print "EQUAL" if both the values are equal.
// Otherwise, the program should print "NOT EQUAL".

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    if (num1 == num2)
    {
        printf("EQUAL");
    }
    else
    {
        printf("NOT EQUIAL");
    }

    return 0;
}