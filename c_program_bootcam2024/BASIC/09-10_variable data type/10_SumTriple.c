#include <stdio.h>
#include <stdlib.h>

int main(){

    int num;
    int f3, f2, f1; 
    int num_10, num_1;

    printf("num: ");
    scanf("%d", &num); // Fixed: Removed extra spaces

    // Figure calculation
    f3 = num / 100;
    num_10 = num % 100; // Changed: Use modulo operator for remainder

    f2 = num_10 / 10;
    f1 = num_10 % 10; // Changed: Simplified calculation of f1

    printf("%d\n", f1 + f2 + f3);

    return 0;
}
