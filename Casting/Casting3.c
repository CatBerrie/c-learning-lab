// Only Decimal Part

#include <stdio.h>
int main()
 {

float A;
printf("Enter the float number:");
scanf("%f", &A);
//float B = A - (int)A;

printf("The Integer part of the number: %d\n", (int)A);
// in casting i need to write the format specifier of the data type im using for casting in printf
// e.g. %d in last printf as i use casting (int) on a float varible A.
printf("The decimal part of the number: %0.3f\n",A - (int)A);
return 0;

 }