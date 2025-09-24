#include <stdio.h>
#include <stdlib.h>
// using fgetc count char

int main(void)
{
    FILE *fp;
    int c;  // ✅ int 타입 사용! not char
    int cnt;

    fp = fopen("exerciseFile.txt", "r");
    
    if (fp != NULL)
    {
        cnt  = 0;
        while ((c = fgetc(fp)) != EOF)
            printf("# %d: %c\n",++cnt, c);
        fclose(fp);
    }
    return 0;
}