#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 포인터 변수 선언 (정수를 가리키는 포인터)
    int *p;
    
    // 정수 변수 선언 및 초기화
    int s = 2;

    // s의 값 출력 (2)
    printf("%d\n", s);
    
    // s의 메모리 주소 출력 (&는 주소 연산자)
    printf("%p\n", &s);
    
    // 포인터 p에 s의 주소를 할당
    p = &s;
    
    // p가 저장하고 있는 주소값 출력 (&s와 동일)
    printf("%p\n", p);
    
    // printf("%d\n", p); // 잘못된 사용법! 주소를 %d로 출력하면 안됨
    
    // p가 가리키는 주소에 있는 값 출력 (*는 역참조 연산자)
    // *p는 s의 값과 같음 (2)
    printf("%d\n", *p);

    return 0;
}