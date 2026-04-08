/*write a program that calculates and print an (n-th term of the sequence) taking input from the user*/

#include <stdio.h>
int main()
{

float a1,d;
int n; //total numder of all the element of a sequence is always integer.
printf("Enter the initial number(a1):");
scanf("%f",&a1);
printf("Enter the difference in the Arithmetic Sequence:");
scanf("%f",&d);
printf("Enter the number of Arithmetic Elements in the Sequence:");
scanf("%d",&n);
printf("The n-th term of the Arithmetic Sequence (an):%.3f\n",a1+(n-1)*d);
return 0;

}