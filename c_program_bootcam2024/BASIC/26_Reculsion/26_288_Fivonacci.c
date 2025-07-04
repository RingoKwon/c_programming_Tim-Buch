#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibbo(int idx)
{
    // n =  n-1 + n-2
    if (idx == 0)
        return 0;
    if (idx == 1)
        return 1;
    return idx + fibbo(idx - 1);

}
int main()
{
    int idx;
    printf("Enter index: ");
    scanf("%d", &idx);
    printf("Answer: %d", fibbo(idx) );
    return 0;
}