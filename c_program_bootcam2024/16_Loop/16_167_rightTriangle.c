#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, j;
    printf("Enter: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        printf("%d \n", i);
        for (j = 1; j < i + 1; j++)
        {

            printf("%d", (char)j);
        }
    }
    printf("%d \n", n);

    return 0;
}
