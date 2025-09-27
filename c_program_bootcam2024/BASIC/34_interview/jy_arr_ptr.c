#include <stdio.h>
// int array = [1,2,3,4,5]
// 주소의 값을 이용하여 

int main(void)
{
    int a[5] = {1,2,3,4};
    printf("%d",*( a + 2 ));
    return 0;
}