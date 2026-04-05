/*a program that takes 3 grades(int) from
the user then calculate and print the EXACT avarage.*/
// it also shows diff methods of casting.

#include <stdio.h>
int main() {
  int num1, num2, num3;
  double result;
  printf("Enter your three grades:");
  scanf("%d %d %d", &num1, &num2, &num3);
  result = (((double)num1 + (double)num2 + (double)num3) / 3);

  // result= (num1+num2+num3)/3.0;   **this will also give the same ouput.**
  // result=(((double)num1+num2+num3)/3);   **this will also give the same
  // ouput.** result=((num1+(double)num2+num3)/3);   **this will also give the
  // same ouput.**

  printf("result= %.2lf", result);
  return 0;
}