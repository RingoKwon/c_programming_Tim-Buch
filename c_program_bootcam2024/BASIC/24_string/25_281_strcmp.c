#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// #include <string.h>

char *lower(char *input)
{
    int i = 0;
    static char output[300];

    while (input[i] != '\0')
    {
        /* code */
        if (input[i] >= 65 && input[i] <= 90) // 문자 'A', 'Z' 사용 가능
        {
            output[i] = input[i] + 32;
        }
        else
        {
            output[i] = input[i];
        }
        i++;
        // upper to lower
    }
    output[i] = '\0';
    return output;
}
int strLen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int strcmp(char *cmp1, char *cmp2)
{
    int len1 = strLen(cmp1);
    int len2 = strLen(cmp2);
    int output;
    int minLen;

    if (len1 > len2)
    {
        minLen = len2;
    }
    else
    {
        minLen = len1;
    }

    int i = 0;
    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
        {
            if (cmp1[i] < cmp2[i])
            {
                output = -1;
                break;
            }
            else if (cmp1[i] > cmp2[i])
            {
                output = 1;
                break;
            }
            else
            {
                output = 0;
            }
        }
    }
    else
    {
        for (i = 0; i < minLen; i++)
        {
            if (cmp1[i] < cmp2[i])
            {
                output = -1;
                break;
            }
            else if (cmp1[i] > cmp2[i])
            {
                output = 1;
                break;
            }
            else
            {
                if (len1 > len2)
                {
                    output = 1;
                }
                else
                {
                    output = -1;
                }
            }
        }
    }
    // 길이 같고 모두 같으면 같다
    // 길이 다르고 짧은거 기준 같은경우 짧은게 우선
    // 나머지는 짧은거 기준 최초 다른거 기준

    return output;
}

int main()
{
    int c;

       c = strcmp("bcc", "bcca");
    printf("%d\n", c);

    return 0;
}