#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, i, j;

    printf("enter: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("%d, ", i);

    }
    printf("\n");

    for (j = 1; j <= num; j++)
    {
        printf("%d, ",1+num-j);
    }
    printf("\n");
    return 0;
}