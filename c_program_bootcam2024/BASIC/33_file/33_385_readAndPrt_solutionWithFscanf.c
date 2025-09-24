#include <stdio.h>

int main(void)
{
    FILE *fp;
    int cnt;
    int num1, num2;

    fp = fopen("exerciseFile2.txt", "r");

    if (fp != NULL)
    {
        cnt = 0;
        while (cnt < 100)
        {
            fscanf(fp, "%d: %d", &num1, &num2);// fotmat을 맞춰줘주야함 
            printf("%d: %d\n", num1, num2);
            cnt++;
        }
        fclose(fp);
    }
    return 0;
}