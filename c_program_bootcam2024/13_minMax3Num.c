#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3;
    // Remove unused variables
    // float min, max;

    printf("Enter first  Number: ");
    scanf("%f", &num1);

    printf("Enter second  Number: ");
    scanf("%f", &num2);

    printf("Enter third  Number: ");
    scanf("%f", &num3);

    // Simplify logic and handle all cases
    if (num1 >= num2 && num1 >= num3) {
        if (num2 >= num3) {
            printf("%.2f >= %.2f >= %.2f\n", num1, num2, num3);
        } else {
            printf("%.2f >= %.2f >= %.2f\n", num1, num3, num2);
        }
    } else if (num2 >= num1 && num2 >= num3) {
        if (num1 >= num3) {
            printf("%.2f >= %.2f >= %.2f\n", num2, num1, num3);
        } else {
            printf("%.2f >= %.2f >= %.2f\n", num2, num3, num1);
        }
    } else {
        if (num1 >= num2) {
            printf("%.2f >= %.2f >= %.2f\n", num3, num1, num2);
        } else {
            printf("%.2f >= %.2f >= %.2f\n", num3, num2, num1);
        }
    }

    return 0;
}
