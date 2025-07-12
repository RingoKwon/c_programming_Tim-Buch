#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE* fp; // fp는 "file pointer"의 약자입니다.

    fp = fopen("myFirstFile1.txt", "w");

    if( fp != NULL )
    {
        fputc('H', fp);
        fputc('e', fp);
        fputc('y', fp);


        fclose(fp);
    }
    putchar('a');
    
	return 0;
}