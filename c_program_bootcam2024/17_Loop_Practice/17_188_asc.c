#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seq, num, currentValue, previousValue;
    int idx = 0;
    int validation = 1;

    do
    {
        printf("Sequence: ");
        scanf("%d", &seq);
    } while (seq <= 0);

    do
    {
        printf("Enter %dth num: \n", idx + 1);
        scanf("%d", &num);
        seq--;
        idx++;
        if (idx == 1)
        {
            currentValue = num;
        }
        else
        {
            previousValue = currentValue;
            if (num <= previousValue)
            {
                validation = 0;
            }
        }
    } while (seq > 0);
    if (validation == 1)
    {
        printf("vlaid");
    }
    else
    {
        printf("not valid");
    }

    return 0;
}