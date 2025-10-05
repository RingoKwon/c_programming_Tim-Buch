#include <stdio.h>


int main(void)
{ 
int num1 = 5;
int num2 = 7;
int *ptrA, *ptrB;

printf("1: %d; 3: %d\n", num1, num2);

ptrA = &num1;
ptrB = &num2;

printf("1: %d; 3: %d\n", num1, num2);

*ptrA = *ptrA + 1;
*ptrB = *ptrB + 3;

printf("1: %d; 3: %d\n", num1, num2);

ptrA = ptrB;
ptrB = ptrA;

printf("1: %d; 3: %d\n", num1, num2);
printf("1: %d; 3: %d\n", *ptrA, *ptrB);

num1 = *ptrB;
num2 = num1 -3;

printf("1: %d; 3: %d\n", num1, num2);
return 0;
}
