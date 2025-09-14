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
    {
        if(num % 2 == 0)
            return 1;
        return 0;
    }
    result = isEven(num / 10);
    if ( (num % 10) % 2 == 0 )
    {
        if(result == 1)
            return 1;
        else
            return 0;
    }
    else
    {
        if(result == 0)
            return 1;
        else
            return 0;
    }
    
    return -1;
}

int main(void)
{
    int output;

    output = isEven(41);
    printf("Output is %d", output);
    return 0;
}