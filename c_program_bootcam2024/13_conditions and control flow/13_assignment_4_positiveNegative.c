// Write a program that reads an input number from the user. 
// The program should print "1" if the value is positive, "-1" if it's negative, and "0" if it equals to zero.

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num ; 

    printf("Enter number: ");
    scanf("%d", &num); 

    if( num >= 1 )    { 
        printf("1");
    }else if ( num <= -1 ) {
        printf("-1");
    }else{
        printf("0");
    }

    return 0 ; 
}