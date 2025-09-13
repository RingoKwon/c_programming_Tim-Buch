#include <stdio.h>

int pellNum(int n)
{
    int prev;
    int curr;
    int temp;
    int i;

    prev = 0;
    curr = 1;
    i = 0;
    if(n == 0)
        return prev;
    if(n == 1)
        return curr;
    while(i++ < n - 1)
    {
        temp = ( 2 * curr ) + prev;
        prev = curr;
        curr = temp;
    }
    return curr;
}

int main(void)
{
    int output;
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);
    output = pellNum(num);
    printf("Output is %d", output);
}