#include <stdio.h>

int cntEven(int num)
{
    if (num < 10)
        return num % 2 == 0;
    return (num % 10 % 2 == 0) + cntEven(num / 10);
}

int validation(int num, int cnt)
{
    int evenCntNum;

    evenCntNum = cntEven(num);
    if (evenCntNum == cnt)
        return 1;
    return 0;
}

int main(void)
{
    int output;
    output =  validation(1213458, 3);
    printf("%d", output);
    return 0;
}