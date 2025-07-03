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
// int strLen(char *str)
// {
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     return i;
// }
int strcmp(char *cmp1, char *cmp2)
{
    int i = 0;
    while (cmp1[i] != '\0' && cmp2[i] != '\0')
    {
        if (cmp1[i] < cmp2[i])
            return -1;
        else if (cmp1[i] > cmp2[i])
            return 1;
        i++;
    }
    if (cmp1[i] == '\0' && cmp2[i] == '\0')
        return 0; 
    else if ( cmp1[i] == '\0')
        return -1; 
    else 
        return 1; 
}

int main()
{
    int c;

    c = strcmp("bcc", "bcca");
    printf("%d\n", c);

    return 0;
}
//  코드리뷰 필요함 !!