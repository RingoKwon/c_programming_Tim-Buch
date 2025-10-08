#include <stdio.h>
#define SIZE 5
#define LIST_SIZE 100

void    freqEle(int* arr)
{
    int arrlist[LIST_SIZE];
    int i;

    i = 0;
    while (i < LIST_SIZE)
    {
        arrlist[i] = 0;
        i++;
    }
    i = 0;
    while (i < SIZE)
    {
        arrlist[arr[i]]++;
        i++;
    }
    i = 0;
    while (i < LIST_SIZE)
    {
        if (arrlist[i] != 0)
            printf("Number: %d appeare %d times\n", i, arrlist[i]);
        i++;
    }
}
int main(void)
{
    int    arr[SIZE] = {1,2,3,3,2};
    freqEle(arr);
    return 0;
}