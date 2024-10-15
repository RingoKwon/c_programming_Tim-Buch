#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num / 1000 >= 1)
    {
        printf("na");
    }
    else if (num / 100 >= 1)
    {
        printf("3");
    }
    else if (num / 10 >= 1)
    {
        printf("2");
    }
    else
    {
        printf("na");
    }

    return 0;
}