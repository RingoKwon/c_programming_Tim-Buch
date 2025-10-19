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
    i = 0;
    while (i < size)
    {
        printf("Enther %zuth name: ", i + 1);
        scanf("%s", eply[i].name);
        printf("Enter %zuth age: ", i + 1);
        scanf("%f", &(eply[i].age));
        printf("Enter %zuth id: ", i + 1);
        scanf("%d", &(eply[i].id));
        i++;
    }
    return (eply);
}

int main(void)
{
    size_t size;

    printf("Enter size: ");
    scanf("%zu", &size);
    Employee* emp1;
    emp1 = alloc1(size);
    prtEply(emp1, size);
    return (0);
}