#include <stdio.h>
#define SIZE 5

void prtFreqElement(int* arr, int size)
{
    int i;
    int j;
    int cnt;
    int is_unique;

    i = 0;
    while (i < size)
    {
        cnt = 0;
        j = 0;
        is_unique = 1;
        //LEFT START
        while (j < i)
        {
            if (arr[i] == arr[j])
            {
                is_unique = 0;
                break;
            }
            // printf("i: %d(%d), j: %d(%d)\n", i, arr[i],j, arr[j]);
            j++;
        }
        // printf("-------------------------------------------\n");
        if (is_unique == 0)
        {
            i++;
            continue;
        }
        // printf("work RIGHT %dth with %d\n", i, arr[i]);
        // printf("===========================================\n");
        while ( j < size)
        {
            if (arr[i] == arr[j])
                cnt++;
            j++;
        }
        printf("Element %d apeare %d times\n", i, cnt);
        i++;
    }
}

int main(void)
{
    int arr[SIZE] = {1,0,3,2,3};
    prtFreqElement(arr, SIZE);
    return (0);
}