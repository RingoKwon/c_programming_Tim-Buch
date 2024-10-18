#include <stdio.h> 
#include <stdlib.h>

int main() {
    int inNum, inPow, outNum; 
    
    printf("Enter number: \n");
    scanf("%d", &inNum);

    printf("Enter power: \n"); 
    scanf("%d", &inPow); 

    outNum = inNum * inNum ; 
    while (inPow>1)
    {
        outNum = outNum*inNum;
        inPow--; 
    }
    printf("Output: %d \n", outNum);
    return 0 ;
}
