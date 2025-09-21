#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Step #1 = Creating a Pointer that points a FILE type
    FILE* fp; // fp = file poiner

    // Step #2 = openning/access to a file
    // fp = fopen(<file_name>, <type_of_operation>);
    // Types of operation:
    /*
            - "w" - Writing.
            - "r" - Reading.
            - "a" - Appending.
    */
    fp = fopen("myFirstFile2.txt", "w");
    // Step #3 - Make Sure the opening wass successful
    // if (fp != NULL) - to make sure that the open operation was successful.
    if (fp == NULL)
    {
        printf("The Opening of the file has Failed\n");
    }
    else
    {
        printf("The file is Opened for writing! \n");
        // Step #4 - work wirh the file (Reading/Writing/etc)
        // Code for working with the file..
    }

    // Step #5 - Close the file 
    fclose(fp);

    return 0;
}
