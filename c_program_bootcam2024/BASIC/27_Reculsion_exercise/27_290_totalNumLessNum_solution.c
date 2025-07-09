#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numLessCnt(int num)
{
    int input;
    printf("enter: ");
    scanf("%d", &input);
    if (input == -1)
        return 0;
    if (input < num)
        return 1 + numLessCnt(num);
    return numLessCnt(num);
}
int main()
{
    int thresh;
    printf("Threshold: ");
    scanf("%d", &thresh);
    printf("%d" , numLessCnt(thresh));

    return 0;
}
