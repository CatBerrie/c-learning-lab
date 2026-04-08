/*Write a program that calculate and print the sum of a sequence taking input from the user
### S=n/2*(a1+an),
Sn is the sum of the first n terms, a1 is the first term, and an is the last (or nth) term.
An alternative formula is used when the last term is not known, but the common difference (d) is:
### Sn = (n / 2) * [2a1 + (n - 1)d]
where d is the constant difference between consecutive terms.*/

#include <stdio.h>
#include <math.h>
int main()
{

float a1,an,n;//d;  //if the last term (an) is not known buth d is...then..
//int n cant be used as later n/2 will result a float value and then only int part will count and gives wrong ans;
printf("Enter the initial number(a1):");
scanf("%f",&a1);
//printf("Enter the difference in the Arithmetic Sequence:");
//scanf("%f",&d);
printf("Enter n-th term of the Arithmetic Sequence(an):");
scanf("%f",&an);
printf("Enter the number of Arithmetic Elements in the Sequence(n):");
scanf("%f",&n);
printf("Sum of the Sequence: %.3f\n",(n/2*(a1+an)));
//printf("Sum of the Sequence: %.3f\n",(n/2*(2a1+(n-1)*d)));
return 0;

} 