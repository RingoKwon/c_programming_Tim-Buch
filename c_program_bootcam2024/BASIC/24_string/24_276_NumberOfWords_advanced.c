#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dd[100] = "  dfdf b   c   ";
    int i;
    int cnt = 0;
    // count space right after the character
    for (i = 0; i < strlen(dd); i++)
    {
        if (i != 0)
        {
            if (dd[i - 1] != ' ' && dd[i] == ' ')
            {
                cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
}
