#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1+2+3+...+ num-1 + num
int sumNum(int num)
{
    int result;

    if (num == 1)
        return 1;
    result = num + sumNum(num - 1);
    
    return result;
}

int main()
{
    int input;
    int result;
    printf("Enter the number: ");
    scanf("%d", &input);
    result = sumNum(input);
    printf("Result = %d", result);
    return 0;
}