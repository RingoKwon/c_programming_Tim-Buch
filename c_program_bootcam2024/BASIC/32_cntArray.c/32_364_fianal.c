#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10 
/*
[Problem]
// Create an array to count occurrences of 'a'-'z', 'A'-'Z', and ' ' (space)
- count the most apeared charactor
[Memo]
- can map by usign conditainlas but curios it is best solution?

*/
int main()
{
    char sourceArr[SIZE] = {'d', 'E', 'm', 'O', ' ', 't', 'e', 'x', 't','d'};
    int countArr[26 + 26 + 1] = {0}; // 26 lowercase + 26 uppercase + 1 space
    // 'a' = 97, 'z'  = 122, 'A' = 65, 'Z' = 90, ' ' = 32
    // - |a-z|: x-97  = 0~25 
    // - |A-Z|: x-39  = 26~51
    // - ' '  : 32+20 = 52  


    return 0;
}