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
        return 1;
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
        return 1;
    }
}

int main()
{
    int a, b;
    char opt; // 문자열로 변경
    
    printf("Enter first num: ");
    scanf("%d", &a);    
    printf("Enter second num: ");
    scanf("%d", &b);
    printf("opt type [(s)um, (m)inus, (d)ivide, (r)emainder]: ");
    scanf("%c", &opt); // 공백 추가 및 %s로 변경

    switch (opt)
    {
    case 's':
        printf("Result: %d\n", sum(a,b)); 
        break;
    case 'm':
        printf("Result: %d\n", minus(a,b));
        break;
    case 'd':
        printf("Result: %d\n", divide(a,b)  );
        break;
    case 'r':
        printf("Result: %d\n", remainder(a,b));
        break;
    default:
        printf("na \n");
        break;
    }
    // if (strcmp(opt, "sum") == 0) {
    //     printf("Result: %d\n", sum(a, b));
    // } else if (strcmp(opt, "minus") == 0) {
    //     printf("Result: %d\n", minus(a, b));
    // } else if (strcmp(opt, "divide") == 0) {
    //     printf("Result: %d\n", divide(a, b));
    // } else if (strcmp(opt, "remainder") == 0) {
    //     printf("Result: %d\n", remainder(a, b));
    // } else {
    //     printf("Invalid operation\n");
    // }
    // return 0;
}
