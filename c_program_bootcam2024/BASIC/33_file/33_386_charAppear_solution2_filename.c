#include <stdio.h>
// input : Designated Character, Filename
// How manny character file has.

int main(void)
{
    char c;
    char    filename[100] = {0};
    FILE    *fp;
    int cnt;

    printf("Enter Designated Character: ");
    scanf("%c", &c);
    
    printf("Enter Filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp != NULL)
    {
        cnt = 0;
        while (!feof(fp))
        {
            if (fgetc(fp) == c)
                cnt++;
        }
        
        fclose(fp);
    }
    printf("Apearance count: %d", cnt);
    return 0;
}