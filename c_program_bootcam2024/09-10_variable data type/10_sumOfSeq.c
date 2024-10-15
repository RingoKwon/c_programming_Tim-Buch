#include <stdio.h>
#include <stdlib.h>

int main(){

    float a1, finalTerm, diff, totalSum; 
    int n; 

    printf("initial term: ");
    scanf("%f", &a1);
    
    printf("n: ");
    scanf("%d", &n);

    printf("diff: ");
    scanf("%f", &diff);
    // printf("%f\n", a1);

    // calculate final term
    finalTerm = a1 + ( diff *( n -1 ));
    // printf("final term = %f", finalTerm);

    // calculate sum of all terms 
    totalSum = (( a1 + finalTerm )/2) * n ; 
    printf("sum of all terms = %f\n", totalSum); 

    return 0;
}