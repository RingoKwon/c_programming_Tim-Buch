#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{

    int arr[SIZE] = {1, 2, 3, 4, 5};
    int arr2[SIZE]= {} ; 
    int i;
    int n = 2 ;

    int temp = arr[0];
    for (i = 0; i < SIZE ; i++)
    {

            arr2[i] = arr[(n+i)%(SIZE)];        
            printf("%d ", (n+i)%(SIZE));
            printf("%d \n", n+i);
    }
    for (i = 0; i < SIZE; i++)
    {
        printf("%d", arr2[i]);
    }

    return 0;
}