// very simple and basic of how to take input ,show output and multiply two 1D arrays.

#include <stdio.h>
#include <stdio.h>
int main(){
int size,i;
printf("Enter the Size of Array:");
scanf("%d",&size);
int ar1[size],ar2[size],ar3[size];
for(i=0;i<size;i++){
    scanf("%d",&ar1[i]);
}

for(i=0;i<size;i++){
    scanf("%d",&ar2[i]);
}

for(i=0;i<size;i++){
    ar3[i] = ar1[i]*ar2[i];
    printf("\n%d\n",ar3[i]);
}
return 0;

}