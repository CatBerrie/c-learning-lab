#include <stdio.h>
int main() {
  int size, k, sum = 0;
  printf("enter the size of the array:");
  scanf("%d", &size);

  int ar[size];
  printf("enter the elements:\n");
  for (k = 0; k < size; k++)
    scanf("%d", &ar[k]);
    
  for (k = 0; k < size; k++) {
    if (ar[k] % 2 == 0) {
      sum = sum + ar[k];
    }
  }
  printf("Sum of the even numbers: %d\n", sum);
  return 0;
}
