#include <stdio.h>

#define SIZE 5

int main(void)
{
    int Arr1[SIZE] = {1, 2, 6, 8, 10};
    int Arr2[SIZE] = {2, 2, 4, 11, 17};
    int i;

    i = 0;
    while (i < SIZE)
    {
        Arr1[i] = Arr1[i] - Arr2[i];
        Arr2[i] = Arr1[i] + Arr2[i];
        Arr1[i] = - Arr1[i] + Arr2[i];
        printf("Arr1: %d; Arr2: %d\n", Arr1[i], Arr2[i]);
        i++;
    }
    i = 0;
    while (i < SIZE)
        printf("%d ", Arr1[i++]);
    
        printf("\n");
    i = 0;
    while (i < SIZE)
        printf("%d ", Arr2[i++]);


    return 0;
}