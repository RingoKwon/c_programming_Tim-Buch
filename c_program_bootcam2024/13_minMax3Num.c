#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3;
    // Remove unused variables
    float min, max;

    printf("Enter first  Number: ");
    scanf("%f", &num1);

    printf("Enter second  Number: ");
    scanf("%f", &num2);

    printf("Enter third  Number: ");
    scanf("%f", &num3);

    // Simplify logic and handle all cases
    min = num2;
    max = num1;

    if (num1 < num2)
    {
        min = num1;
        max = num2;
    }
    if (max < num3)
        max = num3;

    if (min > num3)
        min = num3;

    printf("min %.2f \n", min);
    printf("Max %.2f \n", max);
    return 0;
}
