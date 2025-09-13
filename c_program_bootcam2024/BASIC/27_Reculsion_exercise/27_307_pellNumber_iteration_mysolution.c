#include <stdio.h>

int pellNum(int n)
{
    int prev;
    int curr;
    int i;

    prev = 0;
    curr = 1;
    i = 0;
    if(n == 0)
        return prev;
    if(n == 1)
        return curr;
    while(i++ < n)
    {
        printf("test\n");
    }
    return 0;
}

int main(void)
{
    int output;
    
    output = pellNum(3);
    printf("Output is %d", output);
}