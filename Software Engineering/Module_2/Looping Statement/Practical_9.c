#include<stdio.h>

void main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d" ,&n);

    int rem,sum=0;

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n/=10;
    }
    printf("Reversed Number is : %d",sum);
    
}