#include <stdio.h>

int main(void)
{
    FILE *fp;

    char str[10];
    int cnt;

    fp = fopen("myFirst3.txt", "r");
    if (fp != NULL)
    {
        while(fgets(str, 10, fp ))
            printf("sting #%d: %s\n", cnt++, str);
    }
    
    fclose(fp);
    return 0;
}