#include <stdio.h>
#include <stdlib.h>

typedef struct employee{
    char name[10];
    float age;
    int id;
} Employee;

Employee*   alloc1(void)
{
    Employee*    eply;
    size_t  size;
    size_t  i;

    printf("Enter size: ");
    scanf("%zu", &size);

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
    Employee* emp1;
    emp1 = alloc1();
    return (0);
}