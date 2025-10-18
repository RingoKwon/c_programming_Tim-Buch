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
            res = 1;
            break;
        }
        else if (str1[i] < str2[i])
        {
            res = -1;
            break;
        }
        res = 0;
        i++;
    }
    return (res);
}

int strcmpFlag(char* str1, char* str2)
{
    int flag;
    size_t i;

    i = 0;
    flag = 0;
    while (flag == 0)
    {
        if (str1[i] > str2[i])
            flag = 1;
        else if (str1[i] < str2[i])
            flag = -1;
        if (str1[i] == '\0')
            break;
        i++;
    }
    return (flag);
}

int main(void)
{
    char str1[10] = "rIngo";
    char str2[10] = "ringo";
    int res;
    int res2;

    res = strcmpMy(str1, str2);
    res2 = strcmpFlag(str1, str2);
    printf("%d\n", res);
    printf("%d\n", res2);
    return (0);
}