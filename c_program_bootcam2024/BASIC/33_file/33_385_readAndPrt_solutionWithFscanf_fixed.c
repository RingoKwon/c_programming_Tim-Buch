#include <stdio.h>

int main(void)
{
    FILE *fp;
    int cnt;
    int num1, num2;

    fp = fopen("exerciseFile2.txt", "r");  // 파일 열기
    if (fp != NULL)
    {
        cnt = 0;
        while (cnt < 10)  // 처음 10줄만 읽기
        {
            if (fscanf(fp, "%d: %d", &num1, &num2) == 2)  // 파일 형식에 맞춤
            {
                printf("Number: %d, Square: %d\n", num1, num2);
                cnt++;  // 카운터 증가
            }
            else
            {
                break;  // 더 이상 읽을 데이터가 없으면 종료
            }
        }
        fclose(fp);  // 파일 닫기
    }
    else
    {
        printf("Error: Cannot open file\n");
        return 1;
    }
    return 0;
}