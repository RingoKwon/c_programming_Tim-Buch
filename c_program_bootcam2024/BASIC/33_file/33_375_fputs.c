#include <stdio.h>

int main(void)
{
    FILE *fp;

    puts("Hey man");
    puts("This is Ringo");

    fp = fopen("myFirstFile4.txt", "w");
    if (fp != NULL)
    {
        fputs("dddd", fp);
        fclose(fp);
    }
    return 0;
}