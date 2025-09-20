#include <stdio.h>

// 1234 -> 1; 431 -> -1; 3414 -> 0;
int compare(int ones, int tens)
{
        if (ones < tens)
            return -1;
        if (tens < ones)
            return 1;
        return 0;
}

int varfySort(int num)
{
    int ones;
    int tens;
    int result;

    ones = num % 10;
    tens = num / 10 % 10;
    if ( num < 100 )
        return compare(ones, tens);
    result = varfySort(num / 10);
    if (result == 1 && ones < tens)
        return 1;
    if (result == -1 && tens < ones)
        return -1;
    return result;
}

int main()
{
    int output;
    output = varfySort(4321);
    printf("Output is %d", output);
    return 1;
}