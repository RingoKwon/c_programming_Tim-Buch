#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int digitCnt(int num)
{
    if (num <=  9)
        return 1; 
    return 1 + digitCnt(num/10);
}
int main()
{
	int input; 
    printf("Enter: "); 
    scanf("%d", &input); 
    printf("Answer: %d", digitCnt(input)); 
    return 0;
}