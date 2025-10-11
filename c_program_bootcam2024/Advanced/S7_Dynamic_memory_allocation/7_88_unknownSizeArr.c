#include <stdio.h>
#include <stdlib.h>
/*
when I realloc, if allocation fails I will lose src.
to avoid this situation, prepare a guardrail.
*/
void*   myRealloc(void* srcBlock, unsigned oldSize, unsigned newSize)
{
    return 0;
}
int main(void)
{
    int* arr;
    return (0);
}