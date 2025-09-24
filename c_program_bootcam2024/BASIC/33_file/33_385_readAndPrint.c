#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int     c;

    fp = fopen("exerciseFile2.txt", "r");

    if (fp != NULL)
    {
        while (( c = fgetc(fp) ) != EOF)
        {
            printf("%c", c );
        }
        fclose(fp);
    }
    return 0;
}