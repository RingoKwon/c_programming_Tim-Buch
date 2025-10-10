#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

void* myRealloc(void* srcblock, unsigned oldsize, unsigned newsize)
{
    void* tmp;

    tmp = (void*)malloc(newsize);
    if (tmp == NULL)
    {
        printf("Error");
        return (0);
    }
    printf("Sucess");
    return tmp;
}

int main(void)
{
    int* arr;
    unsigned newsize;
    
    newsize = SIZE + 2;
    arr = (int*)malloc(sizeof(int) * SIZE);
    myRealloc(arr, SIZE * sizeof(int), newsize);
    return (0);
}