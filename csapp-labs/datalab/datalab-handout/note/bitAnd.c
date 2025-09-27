#include <stdio.h>
#include <stdbool.h>


int tf(int a, int b)
{
    return a & b;
}

int main(void)
{
    int a;
    int b;

    a = -2147483648;
    b = 0;

    printf("%d\n",  ~(~ a  | ~b));
    printf("%d\n", tf(a,b));
    return 0;
}
// 확인 하고싶은것: ~연산 작동
// 확인하고자 한 방법 ~연산의 결과를 통하여 작동방식 추측
// ~a = -a -1


// 확인한 팩트
// 1. 정수 a 가 있을 때, ~a -> -a -1
// 
// 가설:
// ~0000 1010 -> 1111 0101 