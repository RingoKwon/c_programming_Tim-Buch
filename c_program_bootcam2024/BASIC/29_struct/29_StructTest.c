#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct coordinate{
    int x; 
    int y;
};

int main()
{

    struct coordinate point; 
    point.x =3; 
    point.y = 4; 

    printf("%d", point);
    
	return 0;
}