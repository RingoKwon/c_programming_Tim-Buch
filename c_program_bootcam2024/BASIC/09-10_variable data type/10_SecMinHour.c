#include <stdio.h>
#include <stdlib.h>

int main(){

    int inSec = 4000; 
    
    int inMin = inSec/60 ;
    int outSec = inSec%60 ;

    int outHour = inMin/60; 
    int outMin = inMin%60; 

    printf( "%d Hour %d Min %d Sec\n", outHour, outMin, outSec);
    
    
    return 0;
}