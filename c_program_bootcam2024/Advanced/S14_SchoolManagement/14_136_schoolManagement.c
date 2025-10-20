#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    unsigned int id;
    char name[20];
}   Student;

typedef struct course 
{
    char    name[20];
    double  averageGrade;
    unsigned int    totalStudents;
    Student*    studentArray;
} Course;

typedef struct school 
{
    char     name[30];
    unsigned int    totalCourses;
    Course* courseArray;
}School;

int main(void)
{
    Student* students;
    return (0);
}