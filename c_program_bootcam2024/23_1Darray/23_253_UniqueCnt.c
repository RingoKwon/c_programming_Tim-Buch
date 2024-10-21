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
            printf("%d, ", arr[i]);
            cnt++;
        }
    }
    printf("cnt:%d", cnt);

    return 0;
}