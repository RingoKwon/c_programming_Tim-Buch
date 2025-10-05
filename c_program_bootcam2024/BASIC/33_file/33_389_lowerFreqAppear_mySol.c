/*
Write a program that reads a filename from the user.
The program should create a "frequencyAppearances" array 
for lowercase letters ('a' - 'z') and 
print the number of times each lowercase letter appears in file.
 */
#include <stdio.h>
#define SIZE 26

int main(void)
{
    char    ch;
    char    filename[100] = {0};
    int     arr[SIZE] = {0};
    int     i;
    FILE    *fp;
    int     max;
    int     idx;

    printf("Enter Filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL)
    {
        return -1;
    }
    else
    {
        while ((ch = fgetc(fp)) != EOF)
        {
            if (ch >= 'a' && ch <= 'z')
                arr[ch - 'a']++;
        }
        fclose(fp);
    }
    i = 0;
    idx = 0;
    max = arr[i];
    while (i < SIZE)
    {
        if (max < arr[i])
        {
            max = arr[i];
            idx = i;
        }
        i++;
    }
    printf("The most frequent alphbet = %c(%d times)", idx + 'a', max);
    return 0;
}