#include <stdio.h>
#include <stdlib.h>

int main()
{

    int date = 30;
    int i = 1;
    float optionCent = 0.01;

    while (i <= 30)
    {
        printf("day: %d, amt: %.2f \n", i, optionCent);
        optionCent = optionCent * 2;
        i++;
    }
    printf("lastday  \n");
    printf("%f \n", optionCent);
    printf("1000000 \n");

        return 0;
}