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

void    updateGrade(Course* course)
{
    double  totalGrade;
    size_t i;

    totalGrade = 0;
    i = 0;
    while (i < course->totalStudents)
    {
        totalGrade += course->studentArray->grade;
        i++;
    }
    course->averageGrade = totalGrade / course->totalStudents;
}
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
        i++;
    }
    updateGrade(newCourse);
    return (newCourse);
}

School* createSchool()
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
        printf("Enter details for course #%zu\n", i + 1);
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
    printf("Student grade: %u\n", student->grade);
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

void    printStudentWhoPassed(Course* course, double cutOffGrade)
{
    size_t i;

    i = 0;
    while (i < course->totalStudents)
    {
        if (course->studentArray[i].grade >= cutOffGrade)
        {
            printStudentDetails(&(course->studentArray[i]));
        }
        i++;
    }
}

void    printStudentWhoFailed(Course* course, double cutOffGrade)
{
    size_t i;

    i = 0;
    while (i < course->totalStudents)
    {
        if (course->studentArray[i].grade < cutOffGrade)
        {
            printStudentDetails(&(course->studentArray[i]));
        }
        i++;
    }
}

void    printCourseWithPassAvgGrade(School* school, double cutOffGrade)
{
    size_t i;

    printf("Courses with pass average grade:\n");
    i = 0;
    while (i < cutOffGrade) 
    {
        if (school->courseArray[i].averageGrade >= cutOffGrade)
            printCourseDetails(&(school->courseArray[i]));
    }
}

void    printCourseWithFailAvgGrade(School* school, double cutOffGrade)
{
    size_t i;

    printf("Courses with fail average grade:\n");
    i = 0;
    while (i < cutOffGrade) 
    {
        if (school->courseArray[i].averageGrade < cutOffGrade)
            printCourseDetails(&(school->courseArray[i]));
    }
}

void    printAverageGradeallCourses(School* school)
{
    double totalGrade = 0;
    size_t i;
    double average;

    i = 0;
    while (i < school->totalCourses)
    {
        totalGrade += school->courseArray[i].averageGrade;
        i++;
    }
    average = totalGrade / school->totalCourses;
    printf("Average grade between all courses in school %s is %.2f\n", school->name, average);
}

void    printCourseWithHighestAverage(School* school)
{
    double highestAvg = 0;
    Course* highestAvgCourse = NULL;
    size_t i;

    i = 0;
    while (i < school->totalCourses)
    {
        if (school->courseArray[i].averageGrade > highestAvg)
        {
            highestAvg = school->courseArray[i].averageGrade;
            highestAvgCourse = &(school->courseArray[i]);
        }
        i++;
    }
}


int main(void)
{
    School* mySchool = createSchool();
    return (0);
}