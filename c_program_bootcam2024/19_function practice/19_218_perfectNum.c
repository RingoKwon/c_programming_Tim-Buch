#include <stdio.h>
#include <stdlib.h>

int divisoer_opt(int num)
{
    int i;
    int sum = 0;

    if (num == 1)
        return 1;
    for (i = 1; i * i <= num; i++)
    {
        if( num % i ==0){
            sum += i; 
            if( i*i != num ){
                sum += num/i;
            }
        }
    }
    return sum;
}

int main()
{
    int num;
    
    printf("Enter number: \n");
    scanf("%d", &num);
    
    int sum = divisoer_opt(num);  // num 값을 입력받은 후에 함수 호출

    if (num == sum - num) {  // 완전수 조건 수정
        printf("perfect number \n");
        printf("sum %d, num %d", sum - num, num);
    } else {
        printf("not perfect number\n");
        printf("sum %d, num %d", sum - num, num);
    }
    return 0;
}
