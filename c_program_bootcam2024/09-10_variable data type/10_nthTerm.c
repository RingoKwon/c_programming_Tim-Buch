#include <stdio.h>
#include <stdlib.h>

int main(){

    int initial = 1;
    int diff = 2;
    int n = 9;
    int nThFig;

    nThFig = initial + (diff * (n - 1));
    printf("%d\n", nThFig);

    return 0;
}