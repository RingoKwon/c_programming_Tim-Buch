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

float* getEle(float* arr, int size)
{
    int i;
    float   ele;

    i = 0;
    printf("Enter %d Ele{int)\n", SIZE);
    while (i < SIZE)
    {
        printf("%dth Element : ", i + 1);
        scanf("%f", &ele);
        arr[i] = ele;
        i++;
    }
    return (arr);
}

int main(void)
{
    float* arr;
    unsigned newsize;
    int i;
    
    newsize = SIZE + 2;
    arr = (float*)malloc(sizeof(float) * SIZE);
    if (arr == NULL)
    {
        printf("Malloc Failed\n");
        return (0);
    }
    getEle(arr, SIZE);
    // arr[SIZE +1] = 3;
    i = 0;
    while (i < SIZE)
    {
        printf("%f, ", arr[i]);
        i++;
    }
    printf("\n");
    arr = myRealloc(arr, SIZE * sizeof(int), newsize);
    arr[SIZE] = 999;
    arr[SIZE + 1] = 1000;
    i = 0;
    while (i < newsize)
    {
        printf("%f, ", arr[i]);
        i++;
    }
    printf("\n");
    return (0);
}