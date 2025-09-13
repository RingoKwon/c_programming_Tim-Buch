#include <stdio.h>
// input = 123 -> 1 + 2 + 3 = 6(even) then 1 
// input = 3123 -> 3 + 1 + 2 + 3 = 9(odd) then 0
// 'digitSum', 'isEven'

int digitSum(int num)
{
    int sum;

    sum = 0;
    if(num < 10)
        return num;
    sum += digitSum(num / 10);
    sum += num % 10;
    return sum;
}

int isEven(int num)
{
    if(num % 2 == 0)
        return 1;
    return 0;
}

int main(void)
{
    int num;
    int numsum;
    int output;

    printf("Enter Number: ");
    scanf("%d", &num);
    if(num < 0)
        num *= -1;
    numsum = digitSum(num);
    output = isEven(numsum);
    printf("Output is %d", output);
}