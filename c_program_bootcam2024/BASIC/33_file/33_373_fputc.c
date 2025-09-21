#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    fp = fopen("myFirstFile2.txt", "w");

    if (fp != NULL) 
    {
        fputc('H', fp);
        fputc('e', fp);
        fputc('y', fp);

        fclose(fp);
    }
    putchar('a');
    fputc('b', stdout);
    return 0;
}