#include <stdio.h>

int pellNum(int n)
{
    if(n < 0)
        return -1;
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return (pellNum(n - 1) * 2) + pellNum(n - 2);
}

int main(void)
{
    int n;
    int output;

    printf("Enter n: ");
    scanf("%d", &n);
    output = pellNum(n);
    printf("Output: %d", output);
}