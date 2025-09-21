#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp; // fp = file poiner
    char c1;
    char c2;
    char c;

    fp = fopen("myFirstFile2.txt", "r");
    if (fp == NULL)
    {
        printf("The Opening of the file has Failed\n");
    }
    else
    {
        printf("The file is Opened for reading! \n");
        c1 = fgetc(fp);
        printf("c1: %c\n", c1 );
        c2 = fgetc(fp);
        printf("c2: %c\n", c2 );
    }
    c = fgetc(stdin);
    printf("stdin: %c", c);


    fclose(fp);

    return 0;
}
