#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5
int main(void)
{
    int* arr[SIZE];
    size_t i;
    size_t r_size;

    i = 0;
    while(i < SIZE)
    {

        if(i == 0)
            r_size = 1;
        else if ( i == 2 || i == 3)
            r_size = 2;
        else
            r_size = 3;
        arr[i] = (int*)malloc(sizeof(int) * r_size);
        i++;
    }
    return (0);
}