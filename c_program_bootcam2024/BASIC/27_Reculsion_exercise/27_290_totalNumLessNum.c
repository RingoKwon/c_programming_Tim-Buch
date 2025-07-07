#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int list 입력 기능
// recursive로 num 보다 작은 숫자 판단기준
// 입력도 recursive로? -> no need list
int numCheckUnder()
{

    int temp = 10;
    int input;
    int output;

    printf("Enter number: ");
    scanf("%d", &input);

    if (input == -1)
        return output ;
    if (input < temp)
    {
        output = 1;
    }
    else
    {
        output = 0;
    }

    
    return output+numCheckUnder();
}
int main()
{
    int num;

    printf("Enter threshold: ");
    scanf("%d", &num);
    
    return numCheckUnder();;
}