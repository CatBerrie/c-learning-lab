#include <stdio.h>
int main() {
    int num;
    int count = 0;
    printf("Enter a Number: \n");
    scanf("%d",&num);
    if(num == 1) printf("Given number %d is not Prime.\n",num);
    else{
        for(int g=2; g<num; g++){
            if(num%g == 0) count=1;
        }

    }
    if(count==0) printf("Given number %d is Prime!!!\n",num);
    else printf("Given number %d is not prime.\n",num);
    return 0;
}