#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num1, num2, num3;
    int set1_2, set1_3, set2_1, set2_3, set3_1, set3_2;

    printf("Enter number thee number: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    set1_2 = num1 % num2;
    set1_3 = num1 % num3;
    set2_1 = num2 % num1;
    set2_3 = num2 % num3;
    set3_1 = num3 % num1;
    set3_2 = num3 % num2;

    if (num1 == 0 || num2 == 0, num3 == 0)
    {
        printf("Cannot devide by Zero");
    }

    if ((set1_2 == 0 || set2_1 == 0) && (set1_3 == 0 || set3_1 == 0) && (set2_3 == 0 || set3_2 == 0))
    {
        printf("devisable \n");
    }
    else
    {
        printf("Non-devisable \n");
    }

    return 0;
}
