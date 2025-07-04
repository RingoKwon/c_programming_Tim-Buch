#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibbo(int idx)
{
    // n =  n-1 + n-2
    
    if (idx == 1)
        return 0;
    if (idx == 2)
        return 1;
    return fibbo(idx-2) + fibbo(idx-1);
// 1 2 3 4 5 6
// 0 1 1 2 3 5
// 
}
int main()
{
    int idx;
    printf("Enter index: ");
    scanf("%d", &idx);
    printf("Answer: %d", fibbo(idx) );
    return 0;
}