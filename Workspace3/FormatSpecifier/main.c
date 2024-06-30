#include <stdio.h>

int main(int argc, char **argv)
{
    double hight = 5 ; 
    double width = 2 ; 
    double perpendicular = (hight + width)* 2 ; 
    double area = hight * width ; 
    
	printf("hight %.2f\nw: %.2f\np: %.2f\na: %.2f\n", hight, width, perpendicular, area);
	return 0;
}
