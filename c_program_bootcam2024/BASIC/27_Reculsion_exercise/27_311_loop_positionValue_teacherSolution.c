#include <stdio.h>

int isEven(int num)
{
    if(num % 2 == 0)
        return 1;
    return 0;
}

int isValid(int num)
{
    if (num < 10)
    {
        if (isEven(num))
            return 1;
        else
            return 0;
    }
    if (num < 100)
    {
        if (!isEven(num / 10) && isEven(num % 10))
            return 1;
        else
            return 0;
    }
    if(!isEven(num / 10) && isEven(num % 10))
        return isValid(num / 100);
    return 0;
}

int main(void)
{
    int input;
    int output;

    printf("Enter number: ");
    scanf("%d", &input);
    output = isValid(input);
    printf("Output is %d", output);
    return 0;
}