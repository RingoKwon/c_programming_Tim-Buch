#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int facto(int input)
{
    if (input == 1)
        return 1; 
    return input * facto( input -1 );
}
int main()
{
    int num;
    int result; 
    
    printf("Enter Num: ");
    scanf("%d", &num);
    result= facto(num);
    printf("Answer: %d", result);
    return 0;
} 