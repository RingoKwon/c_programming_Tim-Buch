#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{

    int arr[SIZE] = {3, 1, 3, 2, 2};
    int i, j;
    int uniqueFlag;
    int cnt = 0;

    for (i = 0; i < SIZE; i++)
    {
        uniqueFlag = 1;
        int cntUnique = 0;
        for (j = i + 1; j < SIZE; j++)
        {
            if (arr[i] == arr[j])
            {
                uniqueFlag = 0;
                break;
            }
            // printf("i%d, j%d \n", i,j);
        }
        if (uniqueFlag == 1)
        {
            // printf("%d, \n", arr[i]);
            cnt++;
            int k;
            for (k = 0; k < SIZE; k++)
            {
                if (arr[i] == arr[k])
                {
                    cntUnique++;
                }
            }
        }
        if (cntUnique > 1)
        {
            printf("%d not unique\n", arr[i]);
        }
    }
    // printf("cnt:%d", cnt); 

    return 0;
}