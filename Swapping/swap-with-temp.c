#include <stdio.h>

int main() {
    int a, b, temp_meu;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("Before Swapping --> a = %d   b = %d\n", a, b);
    temp_meu = a;
    a = b;
    b = temp_meu;

    printf("After Swapping  --> a = %d   b = %d\n", a, b);

    // This is how we can swap 2 variables using an extra temporary variable.

    return 0;
}



// MORE EXAMPLE AND EXPLANATION

// #include <stdio.h>
// int main()
// {

//  double a=50.3,b=100.7,temp;
//  printf("a = %.1lf\n",a);
//  printf("b = %.1lf\n",b);
//  temp=a;
//  a=b;
//  b=temp;
//  printf("a = %.1lf\n",a);
//  printf("b = %.1lf\n",b);
//  return 0;

// }


 //Swappin a with b using an additional variable temp.
/*  ########
1/The proposed code sequence is:
a=temp;
a = b;
b=temp;

Cant use a=temp, cause that means :
Start: a = 5, b = 10, temp = 0
a = temp;
What happens: Take the value of temp (which is 0) and put it into a.
Result: a is now 0. The original value of 5 is gone forever.
State: a = 0, b = 10, temp = 0

a = b;
What happens: Take the value of b (which is 10) and put it into a.
Result: a is now 10.
State: a = 10, b = 10, temp = 0

b = temp;
What happens: Take the value of temp (which is 0) and put it into b.
Result: b is now 0.
State: a = 10, b = 0, temp = 0

Final Result:end up with a = 10 and b = 0. The swap failed completely! 

#########
2/The proposed code sequence is:
temp = a;
a = b;
**temp = b;**

temp = a;
You take the original value of a (which is 5) and save it safely in temp.
State: a = 5, b = 10, temp = 5.

a = b;
You copy the value of b (which is 10) and use it to overwrite a.
 This is the first correct step of the swap
State: a = 10, b = 10, temp = 5.

temp = b;
This is the crucial mistake. You take the current value of b (which is 10) and
 overwrite temp with it. You just destroyed the saved '5' without ever using it to change b.
State: a = 10, b = 10, temp = 10.

The Result
You end up with a = 10 and b = 10. The original value of a (5) is lost, and the 
value of b was never changed!The reason it fails is that the final line needs to be b = temp;
 to take the saved original value of a (which is 5) and assign it to b. Your line temp = b;
  was only copying a value into temp, which is not what we wanted to accomplish.

*/   
 
