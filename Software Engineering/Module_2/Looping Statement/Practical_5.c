#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("Enter a Number: ");
    scanf("%d",&n);

    for (int i = n; i > 0; i--)
    {
        fact = fact * (i);
    }
    printf("factorial of %d is : %d",n,fact);
    
}