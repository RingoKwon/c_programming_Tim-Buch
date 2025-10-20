#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    unsigned int id;
    char name[20];
    unsigned int    grade;
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
    char     name[20];
    unsigned int    totalCourses;
    Course* courseArray;
}School;

Student* createStudent()
{
    Student*    newStudent;

    newStudent = (Student*)malloc(sizeof(Student));
    if (!newStudent)
    {
        printf("Memory Allocation Failed");
        return NULL;
    }
        printf("Enter student name: ");
        scanf("%s", newStudent->name);
        printf("Enter student id: ");
        scanf("%u", &(newStudent->id));
        printf("Enter student grade: ");
        scanf("%u", &(newStudent->grade));
    return (newStudent);
}

Course* createCourse()
{
    Course*    newCourse;
    size_t i;
    Student*    newStudent;

    newCourse = (Course*)malloc(sizeof(Course));
    if (!newCourse)
    {
        printf("Memory Allocation Failed");
        return NULL;
    }
    printf("Enter course name: ");
    scanf("%s", newCourse->name);
    printf("Enter number of students: ");
    scanf("%u", &(newCourse->totalStudents));
    newCourse->studentArray = (Student*)malloc(sizeof(Student) * newCourse->totalStudents);
    if (!newCourse->studentArray)
    {
        printf("Memory Allocation Failed");
        return (NULL);
    }
    i = 0;
    while (i < newCourse->totalStudents)
    {
        printf("Enter details for student #%zu\n", i + 1);
        newStudent = createStudent();
        if (!newStudent)
        {
            printf("Memory Allocation Failed");
            return (NULL);
        }
        newCourse->studentArray[i] = *newStudent;
        free(newStudent);
        }

    return (newCourse);
}

School* createdSchool()
{
    School* newSchool;
    size_t i;
    Course* newCourse;

    newSchool = (School*)malloc(sizeof(School));
    if (!newSchool)
    {
        printf("Memory Allocation Failed");
        return (NULL);
    }
    printf("Enter school name: ");
    scanf("%s", newSchool->name);
    printf("Enter number of course: ");
    scanf("%u", &(newSchool->totalCourses));
    newSchool->courseArray = (Course*)malloc(sizeof(Course) * newSchool->totalCourses);
    if (!newSchool->courseArray)
    {
        printf("Memory Allocation Failed");
        return (NULL);
    }
    i = 0;
    while (i < newSchool->totalCourses)
    {
        newCourse = createCourse();
        if (!newCourse)
        {
            printf("Memory Allocation Failed");
            return (NULL);
        }
        newSchool->courseArray[i] = *newCourse;
        free(newSchool);
        i++;
    }
    return (newSchool); 
}

void    printStudentDetails(Student* student)
{
    printf("Student name: %s\n", student->name);
    printf("Student id: %u\n", student->id);
}

void    printCourseDetails(Course* course)
{
    size_t i;

    printf("Course name: %s\n", course->name);
    printf("Course average grade: %lf\n", course->averageGrade);
    printf("Course total students: %u\n", course->totalStudents);
    i = 0;
    while (i < course->totalStudents)
    {
        printStudentDetails(&(course->studentArray[i]));
        i++;
    }
}

void    printStudentCourses(School* school, int studentID)
{
    size_t i;
    size_t j;
    printf("Course for student with ID %d:\n", studentID);
    i = 0;
    while (i < school->totalCourses)
    {
        j = 0;
        while (j < school->courseArray[i].totalStudents)
        {
            if (school->courseArray[i].studentArray->id == studentID)
            {
                printf(" - %s\n", school->courseArray[i].name);
                break;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    Student* students;
    return (0);
}