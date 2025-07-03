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
    int lenLong;
    if (len1 >= len2)
    {
        lenLong = len1;
    }
    else
    {
        lenLong = len2;
    }
// 길이 같고 모두 같으면 같다 
// 길이 다르고 짧은거 기준 같은경우 짧은게 우선 
// 나머지는 짧은거 기준 최초 다른거 기준 
    int i = 0;
    for (i; lenLong, i++)
    {
        
    }

    return lenLong;
}

int main()
{
    bool a;
    char *b;
    int c;

    a = 'D' == 69;
    printf("%d\n", a);
    b = lower("Sdd");
    printf("%s\n", b);
    c = strLen("dd");
    printf("%d\n", c);

    c = strcmp("d", "d");
    printf("%d\n", c);

    return 0;
}