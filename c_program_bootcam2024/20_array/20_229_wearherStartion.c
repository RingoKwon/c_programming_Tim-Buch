#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 7, i;
    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter Temp: ");
        scanf("%d", &arr[i]);
    }

    int j, hotest = arr[0], coldest = arr[0], sum = 0;

    for (j = 0; j < size; j++)
    {

        sum += arr[j];
        if (hotest < arr[j])
            hotest = arr[j];
        if (coldest > arr[j])
            coldest = arr[j];
    }
    printf("%.2f, %d, %d  ", (float)sum / size, hotest, coldest);

    return 0;
}