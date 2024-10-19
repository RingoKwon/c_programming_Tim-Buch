#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, totalNum = 0;
    int i, j, k;

    printf("enter: ");
    scanf("%d", &num);

    for (i = 3; i <= num; i += 3)
    {
        totalNum += i;
    }
    for (j = 5; j <= num; j += 5)
    {
        if(j%3!=0)
            totalNum += j;
    }

    printf("%d \n", totalNum);

    return 0;
}