#include <stdio.h>
#include <stdlib.h>

typedef struct employee{
    char name[10];
    int age;        // Changed from float to int
    int id;
} Employee;

void    prtEply(Employee* in, size_t size)
{
    size_t i;

    i = 0;
    while (i < size)
    {
        printf("%zuth name: %s, age: %d, id: %d\n", i + 1, in[i].name, in[i].age, in[i].id);
        i++;
    }
}

Employee*   alloc1(size_t size)
{
    Employee*   eply;
    size_t      i;

    eply = malloc(sizeof(Employee) * size);
    if (eply == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        return NULL;
    }
    
    i = 0;
    while (i < size)
    {
        printf("Enter %zuth name: ", i + 1);
        if (scanf("%9s", eply[i].name) != 1)
        {
            fprintf(stderr, "Error: Invalid input\n");
            free(eply);
            return NULL;
        }
        
        printf("Enter %zuth age: ", i + 1);
        if (scanf("%d", &(eply[i].age)) != 1)
        {
            fprintf(stderr, "Error: Invalid input\n");
            free(eply);
            return NULL;
        }
        
        printf("Enter %zuth id: ", i + 1);
        if (scanf("%d", &(eply[i].id)) != 1)
        {
            fprintf(stderr, "Error: Invalid input\n");
            free(eply);
            return NULL;
        }
        i++;
    }
    return (eply);
}

int   alloc2(Employee** eply, size_t size)
{
    size_t  i;

    *eply = malloc(sizeof(Employee) * size);
    if (*eply == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        return -1;
    }
    
    i = 0;
    while (i < size)
    {
        printf("Enter %zuth name: ", i + 1);
        if (scanf("%9s", (*eply)[i].name) != 1)
        {
            fprintf(stderr, "Error: Invalid input\n");
            free(*eply);
            *eply = NULL;
            return -1;
        }
        
        printf("Enter %zuth age: ", i + 1);
        if (scanf("%d", &((*eply)[i].age)) != 1)
        {
            fprintf(stderr, "Error: Invalid input\n");
            free(*eply);
            *eply = NULL;
            return -1;
        }
        
        printf("Enter %zuth id: ", i + 1);
        if (scanf("%d", &((*eply)[i].id)) != 1)
        {
            fprintf(stderr, "Error: Invalid input\n");
            free(*eply);
            *eply = NULL;
            return -1;
        }
        i++;
    }
    return 0;
}

int main(void)
{
    size_t size;

    printf("Enter size: ");
    if (scanf("%zu", &size) != 1 || size == 0)
    {
        fprintf(stderr, "Error: Invalid size\n");
        return 1;
    }

    printf("\n[Return approach]\n");
    Employee* emp1;
    emp1 = alloc1(size);
    if (emp1 == NULL)
        return 1;
    prtEply(emp1, size);
    free(emp1);

    printf("\n[Reference approach]\n");
    Employee* emp2;
    if (alloc2(&emp2, size) != 0)
        return 1;
    prtEply(emp2, size);
    free(emp2);
    
    return (0);
}
