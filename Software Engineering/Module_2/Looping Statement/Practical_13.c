#include<stdio.h>

void main(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    int fact=1;
    while (num != 0)
    {
        fact = fact * num;
        num--;
    }
    
    printf("factorial is : %d",fact);
}