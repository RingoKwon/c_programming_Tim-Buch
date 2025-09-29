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

int logicalShift1(int x, int n) {
    int result = (x >> n) &  0xFFFFFFFF >> n;
    return result;
}

int main(void)
{
    int n = 0x87654321;
    int n1 = 0x80000000;
    int result;

    print_binary(n );
    print_binary(
        ((((0xFFFFFFFF>>1)))) 
    );
    print_binary(
    (0x1 <<  31) 
    );

    printf("--------------\n");
    result = logicalShift1(n, 8);
    print_binary(result);
    printf("%#x\n", result);
    printf("%#x", n);
    return 0;
}