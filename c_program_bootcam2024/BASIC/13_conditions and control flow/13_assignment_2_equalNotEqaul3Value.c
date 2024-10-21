#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    if ( num1  == num2 && num2 == num3){
        printf("EQUAL"); 
    }else {
        printf("NOT EQUAL");
    }
    return 0; 
}

