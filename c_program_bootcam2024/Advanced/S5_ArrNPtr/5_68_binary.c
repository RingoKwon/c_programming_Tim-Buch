#include <stdio.h>

void binaryMy(int n)
{
    if (n == 0)
        return;
    binaryMy(n/2);
    printf("%d", n%2);

}


int main(void)
{
    binaryMy(5);
    return (0);
}