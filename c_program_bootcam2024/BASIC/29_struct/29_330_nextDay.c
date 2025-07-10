#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date
{
    int day;
    int month;
    int year;
} Date;

void printDay(Date dt)
{
    printf("date\nday: %d, month: %d, year: %d\n", dt.day, dt.month, dt.year);
    printf("date+1\nday: %d, month: %d, year: %d\n", dt.day+1, dt.month, dt.year);
}

Date setDate()
{
    Date dt; 
    printf("d:");
    scanf("%d", &dt.day);
    printf("m:");
    scanf("%d", &dt.month);
    printf("y:");
    scanf("%d", &dt.year);

    return dt;
}

int main()
{
    Date day;
    day.day = 1;
    day.month = 3;
    day.year = 2021;

    printDay(day);
    return 0;
}