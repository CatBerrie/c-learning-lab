// very basic way to find the maximum value from a 1D array

#include <stdio.h>
int main(){
int size,k;
printf("Enter the size of array: ");
scanf("%d",&size);
int ar[size]; // dont declare or assign any other variables(e.i. max=ar[0]) in the line you declare the array for the very first time,cause it took a gargabe value from it.
for(k=0;k<size;k++) scanf("%d",&ar[k]);

int max=ar[0];
for(k=1;k<size;k++){
    if(ar[k]>max){
        max=ar[k];
    }
}
printf("Largest Number: %d\n",max);
return 0;
}