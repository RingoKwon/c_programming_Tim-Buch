#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ringo[] = "abc";
    char opt1[] = {'a', 'b', 'c', '\0'};
    char opt2[] = {'a', 'b', 'c'};
    printf("ringo[3]: %d\n", ringo[3]); // 널 문자의 ASCII 값 출력
    
    printf("opt1 array: ");
    int i = 0;
    while (opt1[i] != '\0')
    {
        printf("%c", opt1[i]);
        i++;
    }
    printf("\n");

    printf("opt2 array: ");
    i = 0;
    while (opt2[i] != '\0')
    {
        printf("%c", opt2[i]);
        i++;
    }
    printf("\n");
}