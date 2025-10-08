// void reverse recursive 
#include <stdio.h>
#define SIZE 5

void    reverse(char *str, int size)
{
    char tmp[size];
    int i;

    i = 0;
    while (i < size)
    {
        tmp[size - i - 1] = str[i];
        i++;
    }
    i = 0;
    while (i < size)
    {
        str[i] = tmp[i];
        i++;
    }
}

void swap(char  *arr1, char *arr2)
{
    char    tmp;
    
    tmp = *arr1;
    *arr1 = *arr2;
    *arr2 = tmp;
}

void reverseRecursive(char* str, int size)
{
    if (size <= SIZE / 2)
    {
        return ;
    }
    swap(&str[SIZE - size], &str[size - 1]);
    reverseRecursive(str, size - 1);    
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

int main(void)
{
    char str[SIZE] = {'a', 'b', 'c', 'd', 'e'};
    prt(str, SIZE);
    reverse(str, SIZE);
    prt(str, SIZE);
    reverseRecursive(str, SIZE);
    prt(str, SIZE);
    return (0);
}