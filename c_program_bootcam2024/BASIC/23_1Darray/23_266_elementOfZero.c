#include <stdio.h>
#include <stdlib.h>


void resetZroe( int *pArr, int size )
{
    int i ; 
    for ( i = 0 ; i < size; i++)
    {
        pArr[i] = 0; 
    }
}

int main()
{
    int arr[3] = {2,3,4}; 
    int i ;
    for( i = 0 ; i < 3; i++)
    {
        printf("%d, ", arr[i]);
        printf(" ");
    }

    printf("\n");

    resetZroe(arr,3);
    for( i = 0 ; i < 3; i++)
    {
        printf("%d, ", arr[i]);
        printf(" ");
    }    
    return 0;
}
