#include <stdio.h>
#include <stdlib.h>

typedef struct  employee{
    char name[10];
    float   age;
    int id; 
} Employee;

void    prtEmp(Employee in)
{
    printf("%s, ", in.name);
    printf("%f, ", in.age);
    printf("%d\n", in.id);
}

Employee alloc1(Employee in)
{
    printf("Enter name: ");
    scanf("%s", in.name);
    printf("Enter age: ");
    scanf("%f", &(in.age));
    printf("Enter id: ");
    scanf("%d", &(in.id));
    return (in);
}

void alloc2(Employee* in)
{
    printf("Enter name: ");
    scanf("%s", (*in).name);
    printf("Enter age: ");
    scanf("%f", &((*in).age));
    printf("Enter id: ");
    scanf("%d", &((*in).id));
}
int main(void)
{
    Employee emp1;
    Employee emp2;

    emp1 = alloc1(emp1);
    prtEmp(emp1);
    alloc2(&emp2);
    prtEmp(emp2);
    return (0);
}