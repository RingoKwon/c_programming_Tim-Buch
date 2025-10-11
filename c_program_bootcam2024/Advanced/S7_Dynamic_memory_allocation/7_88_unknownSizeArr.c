#include <stdio.h>
#include <stdlib.h>

void*   myRealloc(void* srcArr, unsigned oldsize, unsigned newsize)
{
    return (0);
}

int testI(void)
{
    int* arr = malloc(1000);
    int cnt;
    int ele;

    cnt = 0;
    while (ele != -1)
    {
        printf("Enter: ");
        scanf("%d", &ele);
        cnt++;
    }
    printf("cnt = %d", cnt - 1);
    return(0);
}

int main(void)
{
    int* arr;
    testI();
    return (0);
}