/* write a program that receives a number with three digits.
And this program should simply print the reversed number of it. */

#include <stdio.h>
#include <stdlib.h>
int main()
{

// suppose a num 531 ---> 531/10 = 53
// units = 1 ---> 531 % 10 =1 
// tens = 3 ---> 53 % 10 = 3
// hundreds = 5 ---> 531/100 = 5

// 531 ---> 135 ######

int num,units,tens,hundreds;
int reversedNum;
printf("Enter your 3-digit number:");
scanf("%d", &num);

units = num % 10;
tens = (num / 10) % 10;
hundreds = num / 100;      //531 ---> hundreds, tens, units, 135 ---> units,tens,hundreds

// #### Another way to get the reverse of the number taking a new variable --- (this is very impo for future problems)
reversedNum = units;  // 1
reversedNum = reversedNum*10 + tens; // 10+3=13
reversedNum = reversedNum*10 + hundreds; // 130+5 = 135 (answer)
// or reversednum = (units * 100) + (tens * 10) + hundreds;

printf("The reversed number of %d is: %d%d%d\n", num,units,tens,hundreds); 
printf("The reversed numder of %d is: %d",num, reversedNum);

return 0;

}