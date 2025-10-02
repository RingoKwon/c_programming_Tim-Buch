#include <stdio.h>

void print_binary(unsigned int n) {
    for (int i = sizeof(n) * 8 - 1; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        
        // 8bit(1byte)마다 | 구분
        if (i % 8 == 0 && i != 0) {
            printf(" | ");
        }
        // 4bit마다 띄어쓰기 (단, 8bit 구분과 겹치지 않을 때만)
        else if (i % 4 == 0 && i != 0) {
            printf(" ");
        }
    }
    printf("\n");
}

int main(void)
{
    int n = 0xff11;
    int a = 123;
    int b = 20;

    printf("  n: ");
    print_binary(n);
    printf(" !n: ");
    print_binary(!n);
    printf(" ~n: ");
    print_binary(~n);
    printf("n<<: ");
    print_binary( n << 8);
    printf("n>>: ");
    print_binary(n>>8);
    printf("%d\n", !00);

    printf("------------------------------------------------------------\n");

    return 0;
}