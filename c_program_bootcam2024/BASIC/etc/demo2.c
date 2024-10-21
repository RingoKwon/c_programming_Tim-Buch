#include <stdio.h>

int main()

{

    printf("%d + %d = %d \n", 5, 2, 5 + 2);

    printf("%d - %d = %d \n", 5, 2, 5 - 2);

    printf("%d * %d = %d \n", 5, 2, 5 * 2);

    printf("%d / %d = %d \n", 5, 2, 5 / 2); // We take just the FULL part of the division

    printf("%d %% %d = %d \n", 5, 2, 5 % 2); // Taking the remainder. Think about what would happen if you used just one "%".

    return 0;
}