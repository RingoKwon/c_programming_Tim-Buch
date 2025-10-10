#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

void* myRealloc(void* srcblock, unsigned oldsize, unsigned newsize)
{
    char* tmp;
    char i;

    tmp = (void*)malloc(newsize);
    if (tmp == NULL)
    {
        printf("Realloc Failed");
        return NULL;
    }

    i = 0;
    while (i < oldsize) 
    {
        tmp[i] = ((char*)srcblock)[i];
        i++;
    }
    printf("The realloc Sucessed\n");
    free (srcblock);
    return tmp;
}

float getEle(int size)
{
    int i;
    float   ele;

    i = 0;
    printf("Enter %d Ele{int)", SIZE);
    while (i < SIZE)
    {
        printf("%dth Element : ", i);
        scanf("%f", &ele);
    }
}

int main(void)
{
    int* arr;
    unsigned newsize;
    
    newsize = SIZE + 2;
    arr = (int*)malloc(sizeof(int) * SIZE);
    if (arr == NULL)
    {
        printf("Malloc Failed\n");
        return (0);
    }


    myRealloc(arr, SIZE * sizeof(int), newsize);
    return (0);
}