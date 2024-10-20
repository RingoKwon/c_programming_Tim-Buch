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
            sum += i; 
            if( i*i != num ){
                sum += num/i;
            }
        }
    }
    return sum;
}

int main()
{
    int num  = 25 ;
    int sum=  divisoer_opt(num);  
    return 0;
}