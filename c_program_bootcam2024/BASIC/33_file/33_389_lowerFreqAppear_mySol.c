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
    char    filename[100] = {0};
    int     arr[SIZE] = {9,9};
    int     i;

    printf("Enter Designated Chatacter: ");
    scanf("%c", &c);
    printf("Enter Filename: ");
    scanf("%s", filename);

    i = 0;
    while (i < SIZE )
    {
        printf("%c", 'a' + i);
        i++;
    }
    return 0;
}