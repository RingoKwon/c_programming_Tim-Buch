#include <stdio.h>
#include <stdlib.h>

int arrSum ( int *arr, int size);

int main () {

    int arr[3] = {20,30,2};
    int result = 0 ; 
    result = arrSum(arr, 3); 
    printf("%d\n", result);

    

    return 0; 
}

int arrSum ( int *pArr, int size){
    int i ; 
    int sum = 0; 
    for( i = 0 ; i < size; i++ )
    {
        sum += pArr[i];
    }
    return sum; 
}