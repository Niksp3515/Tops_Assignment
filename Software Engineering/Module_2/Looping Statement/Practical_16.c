#include<stdio.h>

void main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    int i = 1,sum=0;
    while(i <= n){
        sum+= i;
        i++;
    }
    printf("Sum is : %d",sum);
}