#include <stdio.h>  // 표준 입출력 라이브러리를 포함합니다.

int main() {
    int _age;     // 사용자의 나이를 저장할 변수를 선언합니다.
    int _current; // 현재 연도를 저장할 변수를 선언합니다.

    printf("age:"); // 사용자에게 나이를 입력하라는 메시지를 출력합니다.
    scanf("%d", &_age); // 사용자로부터 나이를 입력받아 _age 변수에 저장합니다.

    printf("current year:"); // 사용자에게 현재 연도를 입력하라는 메시지를 출력합니다.
    scanf("%d", &_current);// 사용자로부터 현재 연도를 입력받아 _current 변수에 저장합니다.

    // 현재 연도에서 나이를 빼서 출생 연도를 계산하고 출력합니다.
    printf("birth year: %d\n", _current - _age);

    return 0; // 프로그램을 정상적으로 종료합니다.
// test git 
}
