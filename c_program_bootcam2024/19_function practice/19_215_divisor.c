#include <stdio.h>
#include <stdlib.h>

int divisor_simple(int num)
{
    int i, sum = 0;

    if (num <= 0)
    {
        printf("not quite ");
        // return 0; // Return early for invalid input
    }
    for (i = num; i > 0; i--)
    {
        if (num % (i) == 0)
        {
            sum += i;
            // printf("%d, ", i);
        }
    }
    // printf("\n %d", sum);
    return sum;
}
int diviser_simple_2(int num)
{
    int i;
    int sum = 0;

    if (num == 1)
    {
        return 1;
    }
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            // printf("%d ", i);
            sum += i;
        }
    }
    return sum + num;
}
int divisoer_optimized(int num)
{
    int i;
    int sum = 0;

    if (num == 1)
    {
        return 1;
    }
    for (i = 1; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
            if (i * i != num) // 완전 제곱수가 아닌 경우에만 num/i를 더함
            {
                sum += num / i;
            }
        }
    }
    return sum;    // num을 따로 더하지 않음
}

int main()
{
    int num = 25;

    int sum = divisor_simple(num);
    printf("%d \n", sum);

    // diviser_simple_2(num);
    int sum2 = diviser_simple_2(num);
    printf("%d \n", sum2);

    int sum3 = divisoer_optimized(num);
    printf("%d \n", sum3);
    return 0;
}
