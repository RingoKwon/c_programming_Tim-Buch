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
    int n = 0x87654321;
    int n1 = 0x80000000;

   print_binary(n);
   print_binary((((n1>>31) + 0x80000000 )>>2 )<<1);
   print_binary(n>>4);
   print_binary((n>>4) + (0x80000000 >> 3) );
   print_binary((n>>0) + (0x80000000 >> 0) );
   print_binary(!n);
   print_binary(!!n);
   print_binary(~n);
    // printf("as: %#x\n", (n >> 8 * (3)  & n1));
    // print_binary(n << 8 * 6);
    printf("%#x\n", (n >> 28 ));
    // printf("%#x\n", n << 8 * 1);
    // printf("%#x\n", 0x10000000 << 8 * 1);
    return 0;
}