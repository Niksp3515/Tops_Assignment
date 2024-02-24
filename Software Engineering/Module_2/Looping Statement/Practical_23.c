#include<stdio.h>
void main(){
    int n,rev=0,rem,i;
    printf("Enter Number: ");
    scanf("%d",&n);

    
    for (i= n; n != 0; n/=10)
    {
        rem = n % 10;
        rev = rev *10 + rem;
    }
    
    printf("%d is reversed number.",rev);
}