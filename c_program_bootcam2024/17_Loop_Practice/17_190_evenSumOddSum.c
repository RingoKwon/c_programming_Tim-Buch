#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int num; 
    int i; 
    int evenSum=0, oddSum=0; 
    printf("Enter: ");
    scanf("%d", &num);

    // digit number 
    for (i=100000000; i>=1; i= i/10 ){
        
        printf("%d \n", i);
        if ( num /i != 0 ){
            printf("%d ",num/i);
            if (num/i % 2 == 0 ){
                evenSum += num/i; 
            }else { 
                oddSum += num/i; 
            }
            num = num - (num/i)*i; 
            printf("%dth %d , %d\n", i, num/i, num) ;
        }
    }
    printf("e:%d, o:%d", evenSum, oddSum);
    return  0 ; 
}