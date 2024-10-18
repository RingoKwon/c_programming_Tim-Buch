#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, j  ;
    printf("Enter: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        j=1;
        while( j <= i)
        {
            printf("%d", i); 
            j++;
        }
        printf(" \n");
    }

    return 0;
}
