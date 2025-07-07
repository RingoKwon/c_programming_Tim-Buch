#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int list 입력 기능
// recursive로 num 보다 작은 숫자 판단기준
// 입력도 recursive로? -> no need list
int numCheckUnder(int previous, int threshold)
{

    int input;
    int output = previous;

    printf("Enter number: ");
    scanf("%d", &input);

    if (input == -1)
        return output;
    if (input < threshold)
    {
        output += 1;
    }
    else
    {
        output += 0;
    }
    return numCheckUnder(output, threshold);
}
int main()
{
    int num;
    int result;

    printf("Enter threshold: ");
    scanf("%d", &num);
    result = numCheckUnder(0, num);
    printf("Result: %d", result);
    return 0;
}