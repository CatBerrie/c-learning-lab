//n-th term of arithmetic sequence : an = a1+(n-1)*d 

/*write a program that calcutes and print an (n-th term of the sequence)
1,3,5...17
here, a1=1, d=2, n=9 */ 

#include <stdio.h>
int main()
{
int a1=1,n=9,d=2,an;
an= a1+(n-1)*d;
printf("an=%d\n",an);
return 0;

}
