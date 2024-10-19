#include <stdio.h>
#include <stdlib.h>

void divisor_simple(int num)
{
    int i;

    if (num <= 0)
    {
        printf("not quite ");
        // return 0; // Return early for invalid input
    }
    for (i = num; i > 0; i--)
    {
        if (num % (num - i) == 0)
        {
            printf("%d, ",num-i );
        }
    }
}

int main()
{
    int num = 30;

    divisor_simple(num);
    return 0;
}
