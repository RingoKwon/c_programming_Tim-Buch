#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int num; 
    int currentDigit; 
    int evenSum=0, oddSum=0; 
    printf("Enter: ");
    scanf("%d", &num);

    // digit number 
    while (num>0 )
    {
        currentDigit = num % 10 ; 
        if(currentDigit % 2 == 0 ){
            evenSum += currentDigit; 
        }else {
            oddSum += currentDigit; 
        }
        num = num/10;
    }
    
        printf("e:%d, o:%d", evenSum, oddSum);
    return  0 ; 
}