#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2;
    char mathOpt;

    printf("Enter mathmatical operator (+, -, /, %%, *): ");
    scanf("%c", &mathOpt);
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // deduger
    // printf("num1: %d, num2: %d, opt: %c \n", num1, num2, mathOpt);

    switch (mathOpt)
    {
    case '+':
        printf("Answer %d %c %d = %d ", num1, mathOpt, num2, num1 + num2);
        break;
    case '-':
        printf("Answer %d %c %d = %d ", num1, mathOpt, num2, num1 - num2);
        break;
    case '/':
        if (num2 != 0)
            printf("Answer %d %c %d = %.2f ", num1, mathOpt, num2, (float)num1 / num2);
        else
            printf("Error: Division by zero!");
        break;
    case '%':
        if (num2 != 0)
            printf("Answer %d %c %d = %d ", num1, mathOpt, num2, num1 % num2);
        else
            printf("Error: Modulo by zero!");
        break;
    case '*':
        printf("Answer %d %c %d = %d ", num1, mathOpt, num2, num1 * num2);
        break;
    default:
        printf("Error: Invalid operator!");
        break;
    }
    return 0;
}
