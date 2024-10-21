#include <stdio.h>
#include <stdlib.h>

int main(){
    int math = 90;
    int sience = 95;
    int writing = 80; 

    // calc avg 
    double average ; 
    average = (math + sience + writing ) / (double)3; 
    printf("%.2lf", average);

    return 0; 
}