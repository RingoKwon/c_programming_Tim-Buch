#include <stdio.h>
#include <stdlib.h> 

int main (){

    char input ;
    int output; 

    printf("Endter : ");
    scanf("%c", &input);

    switch (input)
    {
    case '0':
        output = 0b0000;
        break;
    case '1':
        output = 0b0001;
        break;
    case '2':
        output = 0b0010;
        break;
    case '3':
        output = 0b0011;
        break;
    case '4':
        output = 0b0100;
        break;
    case '5':
        output = 0b0101;
        break;
    case '6':
        output = 0b0110;
        break;
    case '7':
        output = 0b0111;
        break;
    case '8':
        output = 0b1000;
        break;
    case '9':
        output = 0b1001;
        break;
    case 'A':
        output = 0b1010;
        break;
    case 'B':
        output = 0b1011;
        break;
    case 'C':
        output = 0b1100;
        break;
    case 'D':
        output = 0b1101;
        break;
    case 'E':
        output = 0b1110;
        break;
    case 'F':
        output = 0b1111;
        break;
    default:
        printf("Invalid hexadecimal digit\n");
        return 1;
    }

    for (int i = 3; i >= 0; i--) {
        printf("%d", (output >> i) & 1);
    }
    printf("\n");

    return 0; 
}
