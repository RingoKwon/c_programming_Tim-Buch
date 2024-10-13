#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    float min, max;

    printf("Enter first  Number: ");
    scanf("%f", &num1);

    printf("Enter second  Number: ");
    scanf("%f", &num2);

    if (num1 < num2) {
        min = num1;
        max = num2;
    } else {
        min = num2;
        max = num1;
    }

    printf("- minimum: %.2f\n- maximum: %.2f\n", min, max);

    return 0;
}
