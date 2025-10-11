#include <stdio.h>
int main() {
    int arrsize = 1;
    int lastIdx = 0;
    
    // Simulate the loop for 3 elements
    printf("Initial: arrsize=%d, lastIdx=%d\n", arrsize, lastIdx);
    
    // Element 1
    if (arrsize == lastIdx) {  // 1 == 0? NO
        printf("Would double\n");
    }
    lastIdx++;
    printf("After element 1: arrsize=%d, lastIdx=%d\n", arrsize, lastIdx);
    
    // Element 2
    if (arrsize == lastIdx) {  // 1 == 1? YES
        arrsize *= 2;
        printf("Doubled to arrsize=%d\n", arrsize);
    }
    lastIdx++;
    printf("After element 2: arrsize=%d, lastIdx=%d\n", arrsize, lastIdx);
    
    // Element 3
    if (arrsize == lastIdx) {  // 2 == 2? YES
        arrsize *= 2;
        printf("Doubled to arrsize=%d\n", arrsize);
    }
    lastIdx++;
    printf("After element 3: arrsize=%d, lastIdx=%d\n", arrsize, lastIdx);
    
    printf("\nFinal: arrsize=%d, lastIdx=%d\n", arrsize, lastIdx);
    printf("Will print arr[0..%d] = %d elements\n", arrsize-1, arrsize);
    
    return 0;
}
