// input num every time, base condition, compare num and decide bigger num.
#include <stdio.h>

int maxValue()
{
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);
    // base condition: num = -1
    if (num == -1)
    {
        return 0;
    }
    return maxValue();
}
int main()
{
    maxValue();
    return 0;
}