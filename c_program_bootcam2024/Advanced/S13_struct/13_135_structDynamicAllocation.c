#include <stdio.h>
#include <stdlib.h>

typedef struct  employee{
    char name[10];
    float   age;
    int id; 
} Employee;

Employee alloc1(Employee in)
{
    printf("Enter name: ");
    scanf("%s", in.name);
    printf("Enter age: ");
    scanf("%f", &(in.age));
    return (in);
}

int main(void)
{
    Employee emp1;
    emp1 = alloc1(emp1);
    printf("%lu", sizeof(Employee));
    return (0);
}