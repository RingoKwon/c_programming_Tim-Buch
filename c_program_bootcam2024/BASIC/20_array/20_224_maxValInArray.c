#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myArr[]= {1,4,0,2,9,4,5}; 
    int max, i;

    max = myArr[0];
    for ( i = 1 ; i < 7 ; i++)
    {
        if ( max < myArr[i])
        {
            max = myArr[i];
        }
    }
    printf( "%d\n", max); 
    
    return 0;
}