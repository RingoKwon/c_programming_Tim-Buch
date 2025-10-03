#include <stdio.h>

int main(void)
{
    FILE *fp;

    char    str[100];
    char    c;
    // int     i;

    scanf("%s", str);
    printf("%s", str);
    
    fp = fopen("exFile.txt", "r");
    if (fp != NULL)
    {
        // i = 0;
        while ((c = fgetc(fp)) != EOF)
        {
            printf("%c", c);
        }
        fclose(fp);
    }
    return 0;
}