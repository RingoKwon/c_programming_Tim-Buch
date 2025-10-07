// void reverse recursive 
#include <stdio.h>
#define SIZE 5

void swap(char *arr1, char *arr2)
{
    char tmp;     // ✅ FIX: Use char variable, not pointer
    tmp = *arr1;
    *arr1 = *arr2;
    *arr2 = tmp;
}

void    prt(char *str, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

void    iterativeReverse(char* str, int size)
{
    int i;
    i = 0;
    while (i < size / 2)
    {
        // printf("i: %d, size - i - 1: %d\n", i, size - i - 1);
        swap(&str[i], &str[size - i - 1]);
        i++;
    }
}



int main(void)
{
    char str[SIZE] = {'a', 'b', 'c', 'd', 'e'};
    printf("Before: ");
    prt(str, SIZE);
    iterativeReverse(str, SIZE);
    printf("After:  ");
    prt(str, SIZE);
    return (0);
}