#include <stdio.h>

int main(void)
{
    int a = 5;
    int *ptr1 = &a;

    int **ptr2 = &ptr1;  // ptr2 points to ptr1
    ptr2 = &ptr1;        // ptr2 still points to ptr1 (redundant)
    *ptr2 = ptr1;        // ptr1 = ptr1 (redundant)
    **ptr2 = *ptr1;      // a = a (redundant)
    
    return 0;
}