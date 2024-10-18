#include <stdio.h>
#include <stdlib.h>

int main()
{

    int inNum = 0, k = 0 , sum = 0 ;
    float avg;

    int whileKey = 1;
    
    while (whileKey)
    {
        if(inNum != -1){
        printf("Enter Score: \n");
        scanf("%d", &inNum);
        k++;
        sum += inNum;
        }else {
            whileKey = 0 ; 
        }
    }

    avg = (float)sum/k;

    printf("%.2f \n", avg);
    printf("%d \n", sum);
    printf("%d \n", k);
    return 0;
}