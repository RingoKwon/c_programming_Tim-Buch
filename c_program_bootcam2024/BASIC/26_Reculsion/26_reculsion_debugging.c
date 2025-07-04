#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumNum(int num)
{
    printf("sumNum(%d) 호출됨\n", num);
    
    if (num == 1) {
        printf("기저 조건 도달: return 1\n");
        return 1;
    }
    
    printf("계산 중: %d + sumNum(%d)\n", num, num-1);
    int result = num + sumNum(num - 1);
    printf("sumNum(%d) 완료: return %d\n", num, result);
    
    return result;
}

int main()
{
    sumNum(5);
	return 0;
}