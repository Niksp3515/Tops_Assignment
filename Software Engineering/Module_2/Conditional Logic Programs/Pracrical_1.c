#include<stdio.h>
void main(){
    int num1,num2;
    printf("Enter First Integer: ");
    scanf("%d",&num1);
    printf("Enter Second Integer: ");
    scanf("%d",&num2);

    if (num1 == num2)
    {
        printf("Number 1 and Number 2 are equal.");
    }
    else{
        printf("Both Are Different.");
    }
    
}