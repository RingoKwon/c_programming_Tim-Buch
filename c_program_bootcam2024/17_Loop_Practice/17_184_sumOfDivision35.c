#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, totalNum;
    int i;

    printf("enter: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
        if (i % 3 == 0 && i % 5 == 0)
        {
            totalNum = +i;
        }
    printf("%d \n", totalNum);

    return 0;
}