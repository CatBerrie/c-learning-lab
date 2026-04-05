// Avery basic logical C program to get the minimun number among 3 inputs.

#include <stdio.h>
int main(){
int a,b,c;
printf("Input three numbers:\n");
scanf("%d %d %d",&a,&b,&c);
if(b<a){
    if(b<c) printf("%d is the smallest.\n",b);
    else printf("%d is the smallest.\n",c);
}
else{
    if(a<c) printf("%d is the smallest.\n",a);
    else printf("%d is the smallest.\n",c);
}
return 0;
}
