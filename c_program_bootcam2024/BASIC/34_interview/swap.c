// swap w/o t
#include <stdio.h>

int main(void)
{
    int a;
    int b;

    a = 4;
    b = 2;

    a = a - b;  
    b = a + b; 
    printf("a: %d, b: %d", a, b);
    return 0;
}