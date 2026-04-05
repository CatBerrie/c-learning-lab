/* write a code that get temp (double) in Celcisus 
from a user and convert it into Fahrenheit scale */

#include <stdio.h>
int main()

{

double C,F;
printf("Please, Enter the Celsius Value:");
scanf("%lf", &C);
F= (1.8*C+32);
printf("Fahrenheit Temparature: %.3lf\n",F);
return 0;

}