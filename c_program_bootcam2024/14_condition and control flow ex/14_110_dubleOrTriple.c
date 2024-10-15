#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num >=  10 && num <= 99 ){
        printf("2"); 
    }else if (num >= 100 && num <= 999){
        printf("3"); 
    }else {
        printf("na");
    }

    return 0;
}