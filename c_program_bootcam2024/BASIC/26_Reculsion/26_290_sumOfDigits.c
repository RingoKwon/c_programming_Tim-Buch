#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sumDigit(int num ,int  i )
{

    int denom = pow(10, i);
    if (denom >= num) 
        return  num / denom; 
    int remainder = num % denom;
    printf("remainder: %d, i: %d, num : %d add: %d denom: %d\n", remainder, i, num, remainder/(denom/10), denom);

    num = num - remainder;

    return remainder/denom + sumDigit(num, i+1 );
}

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    printf("%d", sumDigit(num, 1 ));
    return 0;
}