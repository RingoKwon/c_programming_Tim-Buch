#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* fp; // fp는 "file pointer"의 약자입니다.

    fp = fopen("myFirstFile1.txt", "w");

    int num;
    if (fp != NULL)
    {
        fputs("ringo", fp);
    }
    printf("%d", num);
    return 0;
}