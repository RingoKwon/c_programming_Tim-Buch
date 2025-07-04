#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sumDigit(int num, int i)
{

    int denom = pow(10, i);
    if (denom >= num)
        return num / denom;
    
    // 현재 자릿수 추출
    int digit = (num % denom) / (denom / 10);
    
    printf("자릿수 %d 추출, i: %d\n", digit, i);
    
    // 남은 숫자에서 현재 자릿수 제거
    int remaining = num - (num % denom);
    
    return digit + sumDigit(remaining + (num % (denom/10)), i + 1);
}

int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d", &num);
    printf("%d", sumDigit(num, 1));
    return 0;
}