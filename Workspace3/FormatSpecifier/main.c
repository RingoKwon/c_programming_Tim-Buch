/*
 * author: ringo 
 * purpose: calculate ractangle 

 * */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
// declaring variables 
    double hight = 5.0 ; 
    double width = 2.2 ; 
    double perimetor; 
    double area ; 
    
// performing perimeter calculation 
    perimetor = (hight + width)* 2.0 ;
    area = hight * width ; 
// displaying input
	printf("hight %.2f\nw: %.2f\np: %.2f\na: %.2f\n", hight, width, perimetor, area);
	return 0;
}
