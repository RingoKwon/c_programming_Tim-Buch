#include <stdio.h>
#include <stdlib.h>

int strcmpMy(char* str1, char* str2)
{
    int res;
    size_t i;

    i = 0;
    while (str1[i])
    {
        if (str1[i] > str2[i])
        {
            res = -1;
            break;
        }
        else if (str1[i] < str2[i])
        {
            res = 1;
            break;
        }
        res = 0;
        i++;
    }
    return (res);
}

int main(void)
{
    char str1[10] = "rIngo";
    char str2[10] = "ringo";
    int res;

    res = strcmpMy(str1, str2);
    printf("%d", res);
    return (0);
}