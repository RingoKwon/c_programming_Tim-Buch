#include <stdio.h>

int main() {
    int arr[5];
    int i;
    
    printf("5개의 정수를 입력하세요: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("입력된 값들: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}