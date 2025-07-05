#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumDigit(int num)
{
    if ( num <= 9 )
        return num; 
    return num%10 +sumDigit(num/10);
}


int main()
{   
    int input ; 
    printf("Enter: ") ;
    scanf("%d", &input); 
    
    printf("Answer: %d", sumDigit(input));
	return 0;
}