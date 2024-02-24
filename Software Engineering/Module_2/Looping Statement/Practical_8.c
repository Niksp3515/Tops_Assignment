#include<stdio.h>

void main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d" ,&n);

    int max=-1,rem;

    while (n != 0)
    {
       rem = n % 10;
       if (rem > max)
       {
        max = rem;
       }
       n /= 10;
    }
    printf("Reversed Number is : %d",max);
    
}