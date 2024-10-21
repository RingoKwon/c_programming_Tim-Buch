#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{

    int arr[SIZE] = {1, 2, 5, 2, 5};
    int i, j;
    int uniqueFlag;
    int cnt = 0;
    //  left side check , right side check
    //
    for (i = 0; i < SIZE; i++)
    {
        uniqueFlag = 1;
        int cntUnique = 0;

        for (j = 0; j < i; j++)
        {
            // printf("Li%d, j%d \n", i, j);
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        for (j = i + 1; j < SIZE; j++)
            if (arr[i]==arr[j])
            {
                cnt++; 
                printf("%d\n", arr[i] );
                continue;
            }
    }
    printf("cnt:%d", cnt);

    return 0;
}