#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int a, int b)
{
    return a + b;
}

int minus(int a, int b)
{
    return a - b;
}

int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("err \n");
        return 0;
    }
}

int remainder(int a, int b)
{
    if (b != 0)
    {
        return a % b;
    }
    else
    {
        printf("err \n");
        return 0;
    }
}

int main()
{
    int a, b;
    char opt[10]; // 문자열로 변경
    
    printf("Enter first num: ");
    scanf("%d", &a);    
    printf("Enter second num: ");
    scanf("%d", &b);
    printf("opt type [sum, minus, divide, remainder]: ");
    scanf(" %s", opt); // 공백 추가 및 %s로 변경

    if (strcmp(opt, "sum") == 0) {
        printf("Result: %d\n", sum(a, b));
    } else if (strcmp(opt, "minus") == 0) {
        printf("Result: %d\n", minus(a, b));
    } else if (strcmp(opt, "divide") == 0) {
        printf("Result: %d\n", divide(a, b));
    } else if (strcmp(opt, "remainder") == 0) {
        printf("Result: %d\n", remainder(a, b));
    } else {
        printf("Invalid operation\n");
    }
    return 0;
}
