#include <stdio.h>
// 123 -> 1 
// 12340 ->  0 
// 987 -> -1

int verifySort(int num)
{
    if (num < 100)
    {
        return 0;
    }
    return ( num / 10 % 10 > num % 10 ) ^ verifySort(num / 10);
}

int trans(int num)
{
    int output;
    int is_desc;

    is_desc = num / 10 % 10 > num % 10;
    if (!verifySort(num))
    {
        if (is_desc)
            return -1;
        else
            return 1;
    }
    return 0;
}

int main(void)
{
    int output;

    output =  trans(1234);
    printf("Output is %d\n", output);
    printf("--------\n");
    return 0;
}


