// author Ringo Kown 
//Purpose: This program prints out my name to the screen

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[] ) 
{ 
    int numberOfArgumrnts = argc; 
    char *argument1 = argv[0];
    char *argument2 = argv[0];
    return 0 ; 
    
    printf("Number of Arguments: %d\n", numberOfArgumrnts);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2); 
    
    return 0 ; 
} 
