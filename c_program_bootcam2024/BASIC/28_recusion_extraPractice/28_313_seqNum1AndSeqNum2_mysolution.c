#include <stdio.h>

int recursive(int total, int num1, int num2)
{
    if(total == 0)
    {
        return 0;
    }
    printf("%d", num1);
    recursive(total - 1, num1, num2);
    printf("%d", num2);
    return 0;
}

int main(void)
{
    int total;
    int num1;
    int num2;
    int output;

    printf("total: ");
    scanf("%d", &total);
    printf("num1: ");
    scanf("%d", &num1);
    printf("num2: ");
    scanf("%d", &num2);
    printf("----------------------\n");
    recursive(total, num1, num2);
    return 0;
}