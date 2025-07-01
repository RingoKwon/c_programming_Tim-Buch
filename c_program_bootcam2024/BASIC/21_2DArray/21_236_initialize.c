#include <stdio.h>
#include <stdlib.h>

int main()
{
    int my2DArray[2][3] = {{1, 5, 6}, {2, 6, 10}};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", my2DArray[i][j]);
        }
        printf("\n");  // 줄 띄어쓰기: \n (백슬래시 + n)
    }

    return 0;
}