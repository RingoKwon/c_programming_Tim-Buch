#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    int arr[SIZE] = {-2, 3, 6, 3, 2};
    int i, j;
    int idx1 = 0  , idx2 = 1 ; 

    // possipe combination ( not considering position )
    int  currentSum ; 
    int minAbs = arr[0] + arr[1];
    
    for (i = 0; i < SIZE; i++)
    {

        for (j = i+1; j < SIZE; j++)
        {
            currentSum = arr[i] + arr[j] ;              
            if (abs(minAbs) > abs(currentSum))
            {
                minAbs = currentSum; 
                idx1 = i ; 
                idx2 = j ;

            }
        }
    }
    printf("%d \n", minAbs);
    printf("i:%d, j:%d",arr[idx1], arr[idx2]); 
    return  0;
}