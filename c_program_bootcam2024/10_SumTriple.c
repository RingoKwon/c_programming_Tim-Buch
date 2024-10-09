#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    int f3, f2, f1; 
    int num_10, num_1;

    printf("num: ");
    scanf("%d" , &num   ); 

    // fig calc 
    f3 = num/100;
    num_10 = num - f3*100;

    f2 = num_10/10;
    num_1 = num_10 - f2*10;
    
    f1 = num_1;


    printf("%d \n", f1+f2+f3);



    return 0;
}
