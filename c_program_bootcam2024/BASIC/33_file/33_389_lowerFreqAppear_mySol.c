/*
Write a prgram that reads a filename frem the user.
The program should create a "frequencyAppearances" array 
for lowercase letters ('a' - 'z') and 
print the number of times each lowercase letter appears in file.
 */
#include <stdio.h>
#define SIZE 26

int main(void)
{
    char    c;
    char    ch;
    char    filename[100] = {0};
    int     arr[SIZE] = {0};
    int     cnt;
    int     i;
    FILE    *fp;

    printf("Enter Filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        return -1;
    }
    else
    {
        i = 0;
        while (i < SIZE)
        { 
            cnt = 0;
            c = i + 'a';
            while ((ch = fgetc(fp)) != EOF)
            {
                if (c == ch)
                    cnt++;
            } 
            arr[i] = cnt;
            i++;
        }
        fclose(fp);
    }
    i = 0;
    while (i < SIZE)
    {
        printf("'%c' : %d\n",i + 'a' ,arr[i]);
        i++;
    }
    return 0;
}