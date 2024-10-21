// Write a program that reads from the user a "three-digit" integer value. 
// The program should print "ASCENDING" if the three digits of the number are in ascending order (from left to right). If not, the program should print "NOT ASCENDING".

// For example:

// * Input: 137 --> ASCENDING (1<3<7)

// * Input: 143 --> NOT ASCENDING.
#include <stdio.h>
#include <stdlib.h>

int main (){

    int num, digit3, digit2, digit1 ; 

    printf("Enter 3-digit number: ");
    scanf("%d", &num);

    digit3 = num/100; 
    digit2 = (num/10)%10;
    digit1 = num%10; 

    if(digit3<digit2 && digit2 < digit1){
        printf("ASCENDING");
    }else {
        printf("NOT ASCENDING"); 
    }

    return 0; 
}