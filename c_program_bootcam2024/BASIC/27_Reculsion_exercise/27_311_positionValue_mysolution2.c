#include <stdio.h>
#include <stdbool.h>

bool    isEven(int num)
{
    if(num % 2 == 0) return 1;
    return 0;
}

bool    positionValue(int num, bool pos)
{
    
    if(num < 10) return isEven(num) == pos;
    return isEven(num % 10) == pos && positionValue(num / 10, !pos);
}

int main(void)
{
    int num;
    int output;

    printf("Enter number: ");
    scanf("%d", &num);
    output = positionValue(num, true);
    printf("output is = %d\n", output);
    return 0;
}