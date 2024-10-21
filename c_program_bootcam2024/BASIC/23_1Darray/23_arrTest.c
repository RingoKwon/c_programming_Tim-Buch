#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[3] = {2, 4, 5};
    int x = 2;

    printf("%d\n", *arr);
    printf("%d\n", *(arr + 1));
    printf("%d\n", *arr + 1);
    printf("%d\n", arr);
    printf("%p\n", arr);
    printf("\n");
    // printf("%d\n", *arr+3);
    printf("%d\n", x);
    printf("%p\n", &x);
    int *pX = &x;
    printf("%d\n", *pX);
    printf("%d\n", *(pX));
    printf("%p\n", pX);
    return 0;
}
