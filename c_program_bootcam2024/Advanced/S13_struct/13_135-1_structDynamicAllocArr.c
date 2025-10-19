#include <stdio.h>
#include <stdlib.h>

typedef struct employee{
    char name[10];
    float age;
    int id;
} Employee;

void    prtEply(Employee* in, size_t size)
{
    size_t i;

    i = 0;
    while (i < size)
    {
        printf("%zuth name: %s, age: %f, id: %d\n",i + 1, in[i].name, in[i].age, in[i].id);
        i++;
    }
}

Employee*   alloc1(size_t size)
{
    Employee*    eply;
    size_t  i;


    eply = (Employee*)malloc(sizeof(Employee) * size);
    if (!eply)
    {
        printf("Mamory allocation failed");
        return (NULL);
    }
    i = 0;
    while (i < size)
    {
        printf("Enter %zuth name: ", i + 1);
        scanf("%9s", eply[i].name);
        printf("Enter %zuth age: ", i + 1);
        scanf("%f", &(eply[i].age));
        printf("Enter %zuth id: ", i + 1);
        scanf("%d", &(eply[i].id));
        i++;
    }
    return (eply);
}

void   alloc2(Employee** eply, size_t size)
{
    size_t  i;


    *eply = (Employee*)malloc(sizeof(Employee) * size);
    if (!*eply)
    {
        printf("Memory allocation failed");
        return;
    }
    i = 0;
    while (i < size)
    {
        printf("Enther %zuth name: ", i + 1);
        scanf("%9s", (*eply)[i].name);
        printf("Enter %zuth age: ", i + 1);
        scanf("%f", &((*eply)[i].age));
        printf("Enter %zuth id: ", i + 1);
        scanf("%d", &((*eply)[i].id));
        i++;
    }
}

int main(void)
{
    size_t size;

    printf("Enter size: ");
    scanf("%zu", &size);
    printf("[Return approach]\n");
    Employee* emp1;
    emp1 = alloc1(size);
    if (!emp1)
    {
        printf("Memory Allocation Failed");
        return (1);
    }
    prtEply(emp1, size);
    free(emp1);

    printf("[Reference approach]\n");
    Employee* emp2;
    emp2 = NULL;
    alloc2(&emp2, size);
    prtEply(emp2, size);
    free(emp2);
    return (0);
}