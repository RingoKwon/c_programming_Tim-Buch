#include <stdio.h>

int findNum(int num)
{
    int userInput;
    int maxNum;

    printf("Enter Number: ");
    scanf("%d", &userInput);
    if(num > 1)
    {
        maxNum = findNum(num - 1);
        if(userInput > maxNum)
            return userInput;
        return maxNum;
    }
    return userInput;
}

int main(void)
{
    int maxNum;

    maxNum = findNum(3);
    printf("Maximum number is %d", maxNum);
    }