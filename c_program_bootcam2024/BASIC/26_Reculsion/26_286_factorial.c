#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int facto(int input)
{
    if (input == 1)
        return 1; 
    return input * ( input -1 );
}
int main()
{
    int num;
    printf("Enter Num: ");
    scanf("%d", &num);
    facto(num);
    printf("Answer: %d", num);
    return 0;
}