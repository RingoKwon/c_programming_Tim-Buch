#include <stdio.h>
#include <stdlib.h>

void*   universalInsert(void* arr, size_t *arrSize, 
                        void* ptr, size_t idx, size_t typeSize)
{
    printf("%lu", sizeof(*ptr));
    return (arr);
}
int main(void)
{
    double arr[] = {1, 2, 3};
    size_t* i;
    float *ptr;

    universalInsert(arr, i, ptr, 1, 2 );
    return (0);

}