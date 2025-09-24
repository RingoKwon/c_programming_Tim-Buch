#include <stdio.h>
#include <stdlib.h>
/*
# 1 
Write Number from 1 to 10 w/ Power
Ex)
    1   1
    2   4
    3   9
    and so on ...
*/
int fitoa(int input, FILE *fp)
{
    if (input < 10)
    {
        fputc(input + '0', fp);
        return 0;
    }
    fitoa(input / 10, fp);
    fputc(input % 10 + '0', fp);

    return 0;
}

int main(void)
{
    FILE *fp;
    char c;
    int base;
    int pow;

    fp = fopen("exerciseFile2.txt", "w");
    base = 0;
    pow = 0;
    if (fp != NULL)
    {
        while (++base <= 100)
        {
            fitoa(base, fp);
            fputc(':', fp);
            fputc(' ', fp);
            fitoa(base * base, fp);
            fputc('\n', fp);
        }
        fclose(fp);
    }
}