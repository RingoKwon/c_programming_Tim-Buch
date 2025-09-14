#include <stdio.h>
// input = 123 -> 1 + 2 + 3 = 6(even) then 1
// input = 3123 -> 3 + 1 + 2 + 3 = 9(odd) then 0
// 'digitSum', 'isEven'
//-----------------------------------------------
// even + odd = odd; odd + odd = even; even + even = even;

int isEven(int num)
{
    int result;

    if(num < 10)
        return num % 2 ? 0 : 1;
    return num % 10 % 2 ? !isEven(num / 10) : isEven(num / 10);
}

int main(void)
{
    int output;

    output = isEven(233211);
    printf("Output is %d", output);
    return 0;
}