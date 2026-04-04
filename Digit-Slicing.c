/* Write a program that will receive a number with three digits.
And this program should calculate the sum of digits in this number. */

#include <stdio.h>
#include <stdlib.h>
int main()
{

// suppose a num 531 ---> 531/10 = 53
// units = 1 ---> 531 % 10 =1 
// tens = 3 ---> 53 % 10 = 3
// hundreds = 5 ---> 531/100 = 5

int num;
printf("Enter your 3-digit number:\n");
scanf("%d", &num);

int units = num % 10;
int tens = (num / 10) % 10;
int hundreds = num / 100;

printf("The total sum of the digits in %d is: %d\n", num,units+tens+hundreds);
return 0;

}
