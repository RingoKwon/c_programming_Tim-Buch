// input num every time, base condition, compare num and decide bigger num.
#include <stdio.h>

int maxValue(int maxnum)
{
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);
    if (num == -1)
    {
        printf("Maximun number is %d", maxnum);
        return 0;
    }
    if (maxnum < num)
    {
        maxnum = num;
    }
    // base condition: num = -1
    return maxValue(maxnum);
}
int main()
{
    int fstnum;
    printf("Enter number: ");
    scanf("%d", &fstnum);
    maxValue(fstnum);
    return 0;
}