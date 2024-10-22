#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[3] = {2, 4, 5};
    int x = 2;

    printf("%d\n", *arr);
    printf("%d\n", *(arr + 1));
    printf("%d\n", *arr + 1);
    printf("%d\n", arr);
    printf("%p\n", arr);
    printf("%p\n", (arr+1));
    printf("%p\n", (arr+2));
    printf("%p\n", (arr+3));
    printf(" \n");
    printf("%d\n", (arr[1]));
    printf("%d\n", (arr[2]));
    printf("\n");
    // printf("%d\n", *arr+3);
    printf("%d\n", x);
    printf("%p\n", &x);
    int *pX = &x;
    printf("%d\n", *pX);
    printf("%d\n", *(pX));
    printf("%p\n", pX);
    return 0;
}

// C언어에서 배열을 함수 매개변수로 받을 때는 포인터로 받아야 합니다.

// ```c
// // 올바른 방법
// void function(int *pArr) {  // 포인터로 받음
//     pArr[1] = 10;
// }

// // 잘못된 방법
// void function(int arr) {    // 단일 정수로는 배열을 받을 수 없음
//     arr[1] = 10;  // 에러!
// }

// int main() {
//     int arr[5] = {1,2,3,4,5};
    
//     function(arr);  // 배열은 자동으로 포인터로 전달됨
// }
// ```

// 이유:
// 1. 배열은 함수로 전달될 때 첫 번째 요소의 주소만 전달됨
// 2. 포인터를 통해 그 주소에서 배열 요소에 접근
// 3. 단순 int로 받으면 주소가 아닌 값만 받게 되어 배열 접근 불가