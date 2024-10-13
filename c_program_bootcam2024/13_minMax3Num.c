#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3;
    float min, max;

    printf("Enter first  Number: ");
    scanf("%f", &num1);

    printf("Enter second  Number: ");
    scanf("%f", &num2);

    printf("Enter third  Number: ");
    scanf("%f", &num3);

    if (num1 > num2)
    {
        if (num3 > num1)
        {
            printf("3>1>2 \n");
        }
        else if (num3 > num2)
        {
            printf("1>3>2 \n");
        }
        else
        {
            printf("1>2>3 \n");
        }
    }
    if (num2 > num1)
    {
        if (num3 > num2)
        {
            printf("3>2>1 \n");
        }
        else if (num3 > num1)
        {
            printf("2>3>1 \n");
        }
        else
        {
            printf("2>1>3 \n");
        }
    }

    return 0;
}
