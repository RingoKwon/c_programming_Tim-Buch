#include <stdio.h>
#include <stdlib.h>
/*
Write Number from 1 to 10 w/ Power
Ex)
    1   1
    2   4
    3   9
    and so on ...
*/
int main(void)
{
    FILE *fp;
    char c;
    int base;
    int pow;

    fp = fopen("exerciseFile2.txt", "w");
    c = '0';
    base = 0;
    pow = 0;
    if (fp != NULL)
    {
        while (++base <= 10)
        {
            if (base != 10)
            {
                fputc(c + base, fp);
                fputc('\n', fp);
            }
            pow = base * base;
        }
        fputc('1', fp);
        fputc('0', fp);

        fclose(fp);
    }
}