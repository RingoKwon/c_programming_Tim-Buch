#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int** create2dArr(int rows, int cols)
{
    int** arr;
    size_t  i;

    arr = (int**)calloc(rows, sizeof(int*));
    if (!arr)
    {
        printf("Memory Allocation Failed");
        return (NULL);
    }
    i = 0;
    while (i < cols)
    {
        *arr = (int*)calloc(cols, sizeof(int));
        i++;
    }
    return (arr);
}



int main(void)
{
    return (0);
}