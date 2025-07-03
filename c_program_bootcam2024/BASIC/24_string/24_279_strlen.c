// #include <stdio.h>
#include <stdlib.h>
// #include <string.h>

// int strlen(char *str);

int main()
{
	return 0;
}
int strlen(char *str){
    int i; 
    while (str[i] != '\0')
    {
        i++;
    }
    
    return i ; 
}