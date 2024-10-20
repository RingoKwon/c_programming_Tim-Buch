#include <stdio.h>
#include <stdlib.h>

int divisor_simple(int num)
{
    int i, sum = 0;

    if (num <= 0)
    {
        printf("not quite ");
        // return 0; // Return early for invalid input
    }
    for (i = num; i > 0; i--)
    {
        if (num % (i) == 0)
        {
            sum += i;
            // printf("%d, ", i);
        }
    }
    // printf("\n %d", sum);
    return sum ; 
}

int main()
{
    int num = 100;

    int sum =  divisor_simple(num);
    printf("%d \n", sum);

    return 0;
}
