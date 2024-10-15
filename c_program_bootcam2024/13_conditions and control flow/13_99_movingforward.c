#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;

    printf("Enter you score: \n");
    scanf("%d", &score);

    if (score >= 80)
    {
        printf("Excellent Job! \n");
    }
    else if (score >= 60)
    {
        printf("Not bad... \n");
    }
    else
    {
        printf("Fail \n");
    }
    return 0;
}