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
    int n = 0x12345678;
    int n1 = 0xFF;

    printf("%lu\n", sizeof(int));
    printf("%d\n", n);
    print_binary(n);
    print_binary(n1);
    // print_binary(~n);
    // print_binary(~n + 1);
    print_binary(n << 8 * 1);
    print_binary((n >> 8 * 2) + 0x100);
    printf("as: %#x\n", (n >> 8 * 0)  & n1);
    // print_binary(n << 8 * 6);
    printf("%#x\n", n >> 4 * 2);
    printf("%#x\n", n << 4 * 2);
    return 0;
}