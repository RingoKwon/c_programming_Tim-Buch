#include <stdio.h>

int findMin(int cnt)
{
    int userInput;
    int minNum;

    printf("Enter Number: ");
    scanf("%d", &userInput);
    if(cnt > 1)   
    {
        minNum = findMin(cnt - 1);
        if(userInput < minNum)
            return userInput;
        return minNum;
    }
    return userInput;
}

int main(void)
{
    int minNum;
    minNum = findMin(3);
    printf("Minimum number is %d", minNum);
    return 0;
}