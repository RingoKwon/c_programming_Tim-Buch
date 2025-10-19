#include <stdio.h>

int main(void)
{
    // BAD: Poor ordering - lots of padding
    typedef struct {
        char c1;    // 1 byte + 3 bytes padding
        int x;      // 4 bytes
        char c2;    // 1 byte + 3 bytes padding
        int y;      // 4 bytes
        char c3;    // 1 byte + 3 bytes padding
    } BadPoint;     // Total: 20 bytes!

    // GOOD: Best ordering - minimal padding
    typedef struct {
        int x;      // 4 bytes
        int y;      // 4 bytes
        char c1;    // 1 byte
        char c2;    // 1 byte
        char c3;    // 1 byte + 1 byte padding
    } GoodPoint;    // Total: 12 bytes!

    // EVEN BETTER: Pack chars together if possible
    typedef struct {
        int x;      // 4 bytes
        int y;      // 4 bytes
        char c[3];  // 3 bytes + 1 byte padding
    } BestPoint;    // Total: 12 bytes!

    printf("BadPoint size:  %2lu bytes (wasteful!)\n", sizeof(BadPoint));
    printf("GoodPoint size: %2lu bytes (better)\n", sizeof(GoodPoint));
    printf("BestPoint size: %2lu bytes (optimal)\n", sizeof(BestPoint));
    
    printf("\n--- Memory Layout Visualization ---\n");
    printf("BadPoint (wasteful):\n");
    printf("  [c1][xxx][xxxx][c2][xxx][xxxx][c3][xxx]\n");
    printf("   1+3    4     1+3    4     1+3  = 20 bytes\n\n");
    
    printf("GoodPoint (optimized):\n");
    printf("  [xxxx][xxxx][c1][c2][c3][x]\n");
    printf("   4     4     1   1   1  +1 = 12 bytes\n");

    return 0;
}
