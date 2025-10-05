#include <stdio.h>
/*
Write a prgram that reads a filename frem the user.
The program should create a "frequencyAppearances" array 
for lowercase letters ('a' - 'z') and 
print the number of times each lowercase letter appears in file.
 */

int main(void)
{
    char    c;
    char    filename[100] = {0};
    int     arr;
    printf("Enter Designated Chatacter: ");
    scanf("%c", &c);
    printf("Enter Filename: ");
    scanf("%s", filename);

    return 0;
}