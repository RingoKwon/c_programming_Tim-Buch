#include <stdio.h>
#include <stdlib.h>
/*
1. using fgetc count char
2. how many line this file has
*/

int main(void)
{
    FILE *fp;
    int c;  //   int 타입 사용! not char
    int cnt;
    int lCnt;

    fp = fopen("exerciseFile.txt", "r");
    
    if (fp != NULL)
    {
        cnt  = 0;
        lCnt = 1;
        while ((c = fgetc(fp)) != EOF)
        {
            printf("# %d: '%c'; ",++cnt, c);
            printf("lCnt = %d\n", c == '\n');
            if (c == '\n')
                ++lCnt;
        }
        fclose(fp);
    }
    printf("---------------------------------------------\n");
    printf("lines: %d", lCnt);
    return 0;
}