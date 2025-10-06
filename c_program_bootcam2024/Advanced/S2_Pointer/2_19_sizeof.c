#include <stdio.h>


int main(void)
{
    int a;
    int arr[3] ={0};
    char c;
    int *ptr;
    int *arrP;

    a = 48;
    ptr = &a;
    arrP = arr;

    printf("size = %lu\n", sizeof('a'));
    printf("size = %lu\n", sizeof("a"));
    printf("size = %lu\n", sizeof("ab"));
    printf("-----------arr----------\n");
    printf("size = %lu\n", sizeof(arr));
    printf("size = %lu\n", sizeof(arrP));
    printf("-----------arr----------");
    printf("size = %lu\n", sizeof(&a));
    printf("size = %lu\n", sizeof(ptr));
    printf("size = %lu\n", sizeof(c));
    printf("size = %lu\n", sizeof(c));
    return 0;
}