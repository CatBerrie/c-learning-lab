#include <stdio.h>
int main (){

int a=2,b=4;
printf("Before Swapping --> a = %d   b = %d\n",a,b);
a = a + b; //a= 6
b = a - b; //b= 2 (6-4)
a = a - b; //a= 4 (6-2)

printf("After Swapping  --> a = %d   b = %d\n",a,b);

// This how we can sawp to numbers without using another temporary variable

return 0;
}