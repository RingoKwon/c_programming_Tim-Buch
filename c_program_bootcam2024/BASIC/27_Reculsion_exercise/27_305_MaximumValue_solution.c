#include <stdio.h>

int findMax(int num, int maxNum)
{
    int maxNum;
    int inputNum;

    if(num >= 1)
    {
        maxNum = findMax(num - 1);
        printf("Enter number: ");
        scanf("%d", &inputNum);
        if(inputNum > maxNum)
            return inputNum;
        return maxNum;
    }
    printf("Maximum Number Is: %d", maxNum);
    return 0;
}

int main(void)
{
    findMax(4);
}
