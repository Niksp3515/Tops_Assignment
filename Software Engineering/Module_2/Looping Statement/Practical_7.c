#include<stdio.h>

void main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d" ,&n);

    int rem,rev=0;

    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n/10;
    }
    printf("Reversed Number is : %d",rev);
    
}