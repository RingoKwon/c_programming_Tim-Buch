// swap w/o t
#include <stdio.h>

int main(void)
{
    int a;
    int b;

    a = 7;
    b = -3;

    a = a - b;  
    b = a + b; 
    a = - a + b;
    printf("a: %d, b: %d", a, b);
    return 0;
}