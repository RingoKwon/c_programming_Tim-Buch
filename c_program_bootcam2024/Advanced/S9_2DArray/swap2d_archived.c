#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
a. swap rows in: r1, r2; O(1);
b. swap cols in: c1, c2; O(n);
*/

void prt2dArr(int arr[3][2], size_t cols, size_t rows)
{
    size_t i;
    size_t j;

    i = 0;
    while (i < rows)
    {
        j = 0;
        while (j < cols)
        {
            printf("%d ", arr[i][j]);
            j++;
        }
        i++;
    }
}

int main(void)
{
    int arr[3][2] = {{1,2}, {10, 20}, {30, 40}};
    size_t rows;
    size_t cols;

    rows = 3;
    cols = 2;
    prt2dArr(arr, rows, cols);
    return (0);
}