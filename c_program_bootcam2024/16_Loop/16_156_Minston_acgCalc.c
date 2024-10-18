#include <stdio.h>
#include <stdlib.h>

int main()
{

    int inNum = 0, k = 0, sum = 0;

    printf("Enter Score: \n");
    scanf("%d", &inNum);

    
    do {

        k++;
        sum += inNum;
        printf("Enter Score: \n");
        scanf("%d", &inNum);
    }while (inNum != -1);


    printf("%.2f \n", (float)sum/k);
    printf("%d \n", sum);
    printf("%d \n", k);
    return 0;
}