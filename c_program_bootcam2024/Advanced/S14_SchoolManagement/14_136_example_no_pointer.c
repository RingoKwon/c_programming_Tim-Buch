#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    unsigned int id;
    char name[20];
} Student;

typedef struct course 
{
    char name[20];
    double averageGrade;
    unsigned int totalStudents;
    Student* studentArray;  // Array of Student structs
} Course;

// Returns Student struct (NOT pointer!)
Student createStudent()
{
    Student newStudent;  // Stack variable, no malloc
    
    printf("Enter student name: ");
    scanf("%19s", newStudent.name);  // Use . (not ->)
    printf("Enter student id: ");
    scanf("%u", &(newStudent.id));
    
    return newStudent;  // Struct gets copied when returned
}

Course* createCourse()
{
    Course* newCourse = malloc(sizeof(Course));
    if (!newCourse)
    {
        fprintf(stderr, "Memory Allocation Failed\n");
        return NULL;
    }
    
    printf("Enter course name: ");
    scanf("%19s", newCourse->name);
    printf("Enter total students: ");
    scanf("%u", &(newCourse->totalStudents));
    
    // Allocate array of Student structs
    newCourse->studentArray = malloc(sizeof(Student) * newCourse->totalStudents);
    if (!newCourse->studentArray)
    {
        fprintf(stderr, "Memory Allocation Failed\n");
        free(newCourse);
        return NULL;
    }
    
    // Fill the array
    for (size_t i = 0; i < newCourse->totalStudents; i++)
    {
        printf("\n--- Student #%zu ---\n", i + 1);
        newCourse->studentArray[i] = createStudent();  // Direct assignment!
        //                           ^^^^^^^^^^^^^^^^
        //                           No *, no temp variable, no free!
    }
    
    return newCourse;
}

void printCourse(Course* course)
{
    printf("\n=== Course: %s ===\n", course->name);
    printf("Total Students: %u\n", course->totalStudents);
    
    for (size_t i = 0; i < course->totalStudents; i++)
    {
        printf("  Student %zu: %s (ID: %u)\n", 
               i + 1, 
               course->studentArray[i].name,
               course->studentArray[i].id);
    }
}

int main(void)
{
    Course* myCourse = createCourse();
    if (!myCourse)
        return 1;
    
    printCourse(myCourse);
    
    // Cleanup
    free(myCourse->studentArray);
    free(myCourse);
    
    return 0;
}
