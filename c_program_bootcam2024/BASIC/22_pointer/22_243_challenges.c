#include <stdio.h>
#include <stdlib.h>

int main() { 
    
    int grade1 = 1 ,  grade2 = 2 ;
    int *p, *a; 

    printf( "%d\n", grade1);
    printf( "%p\n", &grade1);
    printf( "%d\n", grade2);
    printf( "%p\n", &grade2);

//  important! 
    a = &grade1;                    // 올바른 방법: 포인터에 주소 할당
    printf("\n");
    printf("%p\n", a );             // a가 저장한 주소 출력
    printf("\n");
    printf("%d\n", *a );            // a가 가리키는 값 출력 (grade1의 값)
    printf("%d\n", grade1  );       // grade1의 값 직접 출력
    
    printf("\n--- 잘못된 예시 (주석 해제하면 에러) ---\n");
    // *a = &grade1;                // 잘못된 방법! 컴파일 에러 발생
    // 이유: *a는 int 타입인데, &grade1은 주소(포인터) 타입이므로 타입 불일치   

    return 0; 
} 