#include <stdio.h>

int main(void)
{
    int num = 22;
    int num2 = 0;  // 초기화
    FILE *fp;// fp = file pointer;
    
    // 1단계: 파일에 쓰기
    fp = fopen("myFirstFile3_write.txt", "w");
    if (fp != NULL) {
        fprintf(fp, "%d", num);
        fclose(fp);  // 반드시 닫기
    }
    
    // 2단계: 파일에서 읽기
    fp = fopen("myFirstFile3_write.txt", "r");
    if (fp != NULL) {
        fscanf(fp, "%d", &num2);
        fclose(fp);
    }
    
    printf("%d\n", num2);
    printf("-------\n");
    fscanf(stdin, "%d", &num);
    fprintf(stdout, "fprintf: %d\n", num);
    return 0;
}