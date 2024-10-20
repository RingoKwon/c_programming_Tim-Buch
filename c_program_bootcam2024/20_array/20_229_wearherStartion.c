#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

int main()
{
    int i;
    float arr[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        printf("Enter Temp: ");
        scanf("%f", &arr[i]);
    }

    int j;
    int hottestDay =0, coldestDay = 0;
    float sum = 0;

    for (j = 0; j < SIZE; j++)
    {
        sum += arr[j];
        if (arr[hottestDay] < arr[j])
        {
            hottestDay = j;
            continue;
        }
        if ( arr[coldestDay] > arr[j])
        {
            coldestDay = j; 
        }
    }
    // printf("%.2f, %d(%f), %d(%f)  ", (float)sum / SIZE, hotest, coldest);
    printf("%.2f, hot: %.2f(%d), cold: %.2f(%d)  ", (float)sum / SIZE, arr[hottestDay], hottestDay+1,
         arr[coldestDay], coldestDay +1);
    return 0;
}