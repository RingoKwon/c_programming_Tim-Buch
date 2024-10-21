#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num, i, total = 0 ;

    printf("enter: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        total = total + i;

    }

        printf("%d, ", total );
    return 0;
}