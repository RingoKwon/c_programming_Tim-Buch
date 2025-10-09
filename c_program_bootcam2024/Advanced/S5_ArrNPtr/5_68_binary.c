#include <stdio.h>

void binaryMy(int n)
{
    if (n <= 1)
        printf("%d",n);
    else 
    {
        binaryMy(n/2);
        printf("%d", n%2);
    }

}


int main(void)
{
    binaryMy(1);
    return (0);
}