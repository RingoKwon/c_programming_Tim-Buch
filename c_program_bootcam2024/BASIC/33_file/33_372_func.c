#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fp; // fp = file poiner

    fp = fopen("myFirstFile2.txt", "w");
    if (fp == NULL)
    {
        printf("The Opening of the file has Failed\n");
    }
    else
    {
        printf("The file is Opened for writing! \n");
    }

    fclose(fp);

    return 0;
}
