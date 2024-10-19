#include <stdio.h>
#include <stdlib.h>

float avgDigit(int num, int digit)
{
    int  digitNum, digitSum=0, j=0 , i=0; 
    // seperate digit
    if ( num < 0 ){
        num = num*(-1); 
    }
    do { 
        digitNum = num%10;
        num = num/10; 
        // average 
        if (digitNum < digit ){
            j++; 
            digitSum += digitNum;
        }         
        i++;
        // printf("%d, %d , j: %d\n", digitNum, digitSum , j); 
        
    }while(num > 0 );
    printf("%d\n", i);
    return (float)digitSum/j;
}

int main()
{
    int num, digit ;
    float avg; 

    printf("Enter 'num' and 'digit': ");
    scanf("%d%d", &num, &digit);
    printf("\n"); 

    avg = avgDigit(num, digit);

    printf("avg: %.2f \n", avg);
    return 0;
}