#include <stdio.h>

int main(void)
{
    int     i;
    int     cnt;
    char    c;
    char    str[1000];
    FILE    *fp;

    printf("Enter Designated Char: \n");
    scanf("%c", &c);
    printf("Your file is like down below\n");
    fp = fopen("exFile.txt", "r");
    if (fp != NULL)
    {
        cnt = 0;
        while (fgets(str, 1000, fp))
        {
            // printf("%s", str);
            i = 0;
            while( str[i] != '\0')
            {
                if (c == str[i])
                    cnt++;
                printf("%c", str[i++]);
            }
            i++;
        }
        printf("\n");
        printf("Count of Same Charator is %d", cnt);
        fclose(fp);
    }


}
