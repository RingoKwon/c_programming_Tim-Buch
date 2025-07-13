#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp; // fp는 "file pointer"의 약자입니다.

    int count = 0;
    char myString[10]; 
    fp = fopen("myFirstFile1.txt", "r");
    if (fp != NULL)
    {
        while (fgets(myString, 10, fp))
        {
            printf("cnt: %d; str: %s\n", ++count, myString);
        }
        
    }
    return 0;
}