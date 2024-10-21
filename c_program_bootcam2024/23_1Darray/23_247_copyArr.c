#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int main()
{

    int fstArr[SIZE] = {2023, 10, 23}, scdArr[SIZE];
    int i;
    for (i = 0; i < SIZE; i++)
    {
        scdArr[i] = fstArr[i];
        printf("%d, ",scdArr[i] );
    }

    return 0;
}