#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date
{
    int day;
    int month;
    int year;
} Date;

int main()
{
    Date day; 
    day.day = 1 ;
    day.month = 3; 
    day.year = 2021;
    return 0;
}