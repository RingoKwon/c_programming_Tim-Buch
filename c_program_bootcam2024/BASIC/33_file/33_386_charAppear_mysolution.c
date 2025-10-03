#include <stdio.h>

int main(void)
{
    FILE *fp;

    char    str[100];
    char    c;
    int     i;
    int     j;

    scanf("%s", str);
    
    fp = fopen("exFile.txt", "r");
    if (fp != NULL)
    {
        i = 0;
        while ((c = fgetc(fp)) != EOF)
        {
            j = 0;
            while (str[j] != '\0')
            {
                j++; 
            }// af cnt j become cnt(str) 4char => 1 
            printf("%c", c);
        }
        fclose(fp);
    }
    return 0;
}