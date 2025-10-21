# LLDB Debugging Guide for School Management System

## Starting LLDB
```bash
lldb ./14_136_schoolManagement
```

## Setting Breakpoints

# Break at main
(lldb) breakpoint set --name main
# OR
(lldb) b main

# Break at specific line
(lldb) b 14_136_schoolManagement.c:280

# Break at a function
(lldb) b createSchool
(lldb) b createCourse
(lldb) b createStudent

# List all breakpoints
(lldb) breakpoint list
# OR
(lldb) br list

## Running the Program

# Start running
(lldb) run
# OR
(lldb) r

# Continue execution
(lldb) continue
# OR
(lldb) c

# Step over (next line)
(lldb) next
# OR
(lldb) n

# Step into (enter function)
(lldb) step
# OR
(lldb) s

# Step out (exit current function)
(lldb) finish

## Inspecting mySchool Structure

### 1. Print the pointer value
(lldb) print mySchool
# OR
(lldb) p mySchool
# Output: (School *) $0 = 0x0000000100304050

### 2. Print the entire School struct
(lldb) print *mySchool
# OR
(lldb) p *mySchool
# Output shows: name, totalCourses, courseArray

### 3. Print school name
(lldb) print mySchool->name
(lldb) p mySchool->name
# Output: (char [20]) $1 = "MIT"

### 4. Print total number of courses
(lldb) print mySchool->totalCourses
(lldb) p mySchool->totalCourses
# Output: (unsigned int) $2 = 3

### 5. Print courseArray pointer
(lldb) print mySchool->courseArray
(lldb) p mySchool->courseArray
# Output: (Course *) $3 = 0x0000000100304100

## Inspecting Courses

### 1. Print first course
(lldb) print mySchool->courseArray[0]
(lldb) p mySchool->courseArray[0]

### 2. Print first course name
(lldb) print mySchool->courseArray[0].name
(lldb) p mySchool->courseArray[0].name
# Output: (char [20]) $4 = "Math"

### 3. Print first course average grade
(lldb) print mySchool->courseArray[0].averageGrade
(lldb) p mySchool->courseArray[0].averageGrade
# Output: (double) $5 = 85.5

### 4. Print first course total students
(lldb) print mySchool->courseArray[0].totalStudents
(lldb) p mySchool->courseArray[0].totalStudents
# Output: (unsigned int) $6 = 5

### 5. Print ALL courses (if you have 3 courses)
(lldb) print mySchool->courseArray[0]
(lldb) print mySchool->courseArray[1]
(lldb) print mySchool->courseArray[2]

## Inspecting Students

### 1. Print student array pointer for first course
(lldb) print mySchool->courseArray[0].studentArray
(lldb) p mySchool->courseArray[0].studentArray
# Output: (Student *) $7 = 0x0000000100304200

### 2. Print first student in first course
(lldb) print mySchool->courseArray[0].studentArray[0]
(lldb) p mySchool->courseArray[0].studentArray[0]

### 3. Print first student's name
(lldb) print mySchool->courseArray[0].studentArray[0].name
(lldb) p mySchool->courseArray[0].studentArray[0].name
# Output: (char [20]) $8 = "Alice"

### 4. Print first student's ID
(lldb) print mySchool->courseArray[0].studentArray[0].id
(lldb) p mySchool->courseArray[0].studentArray[0].id
# Output: (unsigned int) $9 = 101

### 5. Print first student's grade
(lldb) print mySchool->courseArray[0].studentArray[0].grade
(lldb) p mySchool->courseArray[0].studentArray[0].grade
# Output: (unsigned int) $10 = 85

### 6. Print second student in first course
(lldb) print mySchool->courseArray[0].studentArray[1]

### 7. Print first student in second course
(lldb) print mySchool->courseArray[1].studentArray[0]

## Advanced Inspection

### 1. Print in different formats

# Hexadecimal
(lldb) print/x mySchool->courseArray[0].studentArray[0].id

# Decimal
(lldb) print/d mySchool->courseArray[0].studentArray[0].id

# Binary
(lldb) print/t mySchool->courseArray[0].studentArray[0].id

# String
(lldb) print/s mySchool->name

### 2. Examine memory
(lldb) memory read mySchool
# OR
(lldb) x mySchool

# Read 32 bytes
(lldb) memory read --size 1 --count 32 mySchool

### 3. Print type information
(lldb) type lookup School
(lldb) type lookup Course
(lldb) type lookup Student

### 4. Print with formatting
(lldb) frame variable mySchool
# OR
(lldb) fr v mySchool

## Useful Shortcuts

### Print entire structure tree (pretty print)
(lldb) frame variable -R mySchool
# This shows the entire structure recursively!

### Watch a variable change
(lldb) watchpoint set variable mySchool->totalCourses
# Program breaks when totalCourses changes

### List all local variables
(lldb) frame variable
# OR
(lldb) fr v

### Show current stack frame
(lldb) frame info

### Show backtrace (call stack)
(lldb) bt
# OR
(lldb) thread backtrace

## Example Debugging Session

```
$ lldb ./14_136_schoolManagement
(lldb) b main
(lldb) run

# Enter school data when prompted...

(lldb) n    # Step to next line until mySchool is created
(lldb) n
(lldb) n

# Now inspect mySchool
(lldb) p mySchool
(lldb) p *mySchool
(lldb) p mySchool->name
(lldb) p mySchool->totalCourses

# Inspect first course
(lldb) p mySchool->courseArray[0].name
(lldb) p mySchool->courseArray[0].totalStudents

# Inspect first student in first course
(lldb) p mySchool->courseArray[0].studentArray[0].name
(lldb) p mySchool->courseArray[0].studentArray[0].id
(lldb) p mySchool->courseArray[0].studentArray[0].grade

# Continue
(lldb) c

# Quit
(lldb) quit
```

## Quick Reference Card

| Command | Short | Description |
|---------|-------|-------------|
| `breakpoint set --name func` | `b func` | Set breakpoint at function |
| `run` | `r` | Start program |
| `continue` | `c` | Continue execution |
| `next` | `n` | Step over |
| `step` | `s` | Step into |
| `print var` | `p var` | Print variable |
| `print *ptr` | `p *ptr` | Dereference pointer |
| `frame variable` | `fr v` | Show all local vars |
| `backtrace` | `bt` | Show call stack |
| `quit` | `q` | Exit LLDB |

## Tips

1. Use TAB for autocompletion
2. Use UP/DOWN arrows for command history
3. `help <command>` shows help for any command
4. `p` is much faster than `print`
5. Use `-R` flag with `frame variable` to see recursive structure
6. Press ENTER to repeat last command

## Most Useful for Your Code

```lldb
# After creating mySchool, inspect everything:
(lldb) p mySchool->name
(lldb) p mySchool->totalCourses
(lldb) p mySchool->courseArray[0].name
(lldb) p mySchool->courseArray[0].averageGrade
(lldb) p mySchool->courseArray[0].studentArray[0].name
(lldb) p mySchool->courseArray[0].studentArray[0].grade

# Or use recursive frame variable to see EVERYTHING:
(lldb) frame variable -R mySchool
```
