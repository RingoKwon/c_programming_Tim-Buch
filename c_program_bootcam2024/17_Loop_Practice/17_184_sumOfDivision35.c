#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, totalNum = 0 ;
    int i;

    printf("enter: ");
    scanf("%d", &num);

    for (i = 15; i <= num; i += 15)

            totalNum += i;
    printf("%d \n", totalNum);

    return 0;
}