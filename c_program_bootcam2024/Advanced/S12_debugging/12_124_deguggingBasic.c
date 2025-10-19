#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num3 = 10;
    int* ptr;
    ptr = &num3;
    
    
    int num1, num2;
    float average;
    // printf("Enter num1: ");
    num1 =1;
    // scanf("%d", &num1);
    printf("Enter num2: ");
    // scanf("%d", &num2);
    num2=2;
    average = (float)(num1  + num2) / 2;
    printf("Average = %f\n", average);
    return (0);
}