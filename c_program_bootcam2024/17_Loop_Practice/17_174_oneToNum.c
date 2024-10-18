#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, i;

    printf("enter: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        printf("%d, ", i);

    }
    printf("\n");

    for (i = num; i > 0; i--)
    {
        printf("%d, ",i);
    }
    printf("\n");
    return 0;
}