#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cpyArr(int** des,int* src , size_t size)
{
    size_t  i;

    *des = (int*)malloc(size * sizeof(int));
    if (!*des)
    {
        printf("Memory Allocation Failed");
        return;
    }
    i = 0;
    while (i < size)
    {
        (*des)[i] = src[i];
        i++;
    }

}

// void cpyArrOpt(int** des,int* src, size_t size)
// {
//     *des = (int*)malloc(size * sizeof(int));
//     if (!*des)
//     {
//         printf("Memory Allocation Failed");
//         return;
//     }
//     *des = src;
// }

void prtArr(int* arr, size_t size)
{
    int i;

    i = 0;
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
}

int main(void)
{
    int src[] = {1, 2, 3, 4};
    int* des;
    size_t size;

    size = 4;
    cpyArr(&des, src, size);
    printf("cpyArr()\n");
    prtArr(des, size);
    free(des);
    // printf("cpyArrOpt()\n");
    // cpyArrOpt(&des, src, size);
    // prtArr(des, size);
    // free(des);
    return (0);
}