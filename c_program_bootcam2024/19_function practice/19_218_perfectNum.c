#include <stdio.h>
#include <stdlib.h>

int divisoer_opt(int num)
{
    int i;
    int sum = 0;

    if (num == 1)
        return 1;
    for (i = 1; i * i <= num; i++)
    {
        if( num % i ==0){
            printf("%d %d; ", i, num/i);
        }
    }
}

int main()
{
    int num  = 25 ;
    divisoer_opt(num);  
    return 0;
}