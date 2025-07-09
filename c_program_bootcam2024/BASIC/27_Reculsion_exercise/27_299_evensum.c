#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int evenNum()
{
    int input;
    printf("Enfter num: ");
    scanf("%d", &input);
    if (input ==-1 )
        return 0; 
    if (input%2 == 0 )
        return evenNum() +input ;
    return evenNum();

}
int main()
{
    printf("%d", evenNum());
    return 0;
}
