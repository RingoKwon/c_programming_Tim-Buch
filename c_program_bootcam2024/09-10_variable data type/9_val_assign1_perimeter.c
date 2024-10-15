#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declarartion
    double _width;
    double _height;
    double _area;
    
    printf("width: ");
    scanf("%lf", &_width);

    printf("height: ");
    scanf("%lf", &_height);
    
    _area = (_width * _height) * 2;

    printf("area: %.2lf\n", _area);


    return 0;
}