/* write a code that get temp (double) in Fahrenheit
from a user and convert it into Celsius scale */

#include <stdio.h>
int main()

{

double F,C;
printf("Enter the Fahrenheit Value:");
scanf("%lf", &F);
C= ((F-32)/1.8);
printf("Celcius Temparature: %.3lf\n",C);
return 0;

}