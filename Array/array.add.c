// very sim and basic of how to take input ,show output and add two 1D arrays.

#include <stdio.h>
int main (){
int size,z;
printf("Enter size:");
scanf("%d",&size);
int arr1[size],arr2[size],arr3[size];

for(z=0;z<size;z++) scanf("%d",&arr1[z]);
for(z=0;z<size;z++) scanf("%d",&arr2[z]);
for(z=0;z<size;z++){
     arr3[z] = arr1[z] + arr2[z];
      printf("\n%d\n",arr3[z]);
}
return 0;

}