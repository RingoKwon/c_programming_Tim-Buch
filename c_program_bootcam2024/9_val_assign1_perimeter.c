#include <stdio.h>

int main()
{
    // declarartion
    double width;
    double hight;
    double perimeter;

    printf("width:");
    scanf("%lf", &width);
    printf("height:");
    scanf("%lf", &hight);

    perimeter = (width + hight)*2; 

    printf("perimeter: %.2lf\n", perimeter);
}