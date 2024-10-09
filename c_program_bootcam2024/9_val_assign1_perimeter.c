#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declarartion
    double _width;
    double _height;
    double _perimeter;
    
    printf("width: ");
    scanf("%lf", &_width);

    printf("height: ");
    scanf("%lf", &_height);
    
    _perimeter = (_width + _height) * 2;

    printf("perimeter: %.2lf\n", _perimeter);


    return 0;
}