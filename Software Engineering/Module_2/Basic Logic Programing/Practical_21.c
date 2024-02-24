#include<stdio.h>
void swap_with_temp(int num1,int num2){
    int temp;
    temp = num1;
    num1=num2;
    num2 = temp;
    printf("\nAfter Swapping num1 is : %d",num1);
    printf("\nAfter Swapping Num2 : %d",num2);
}

void swap_without_temp(int num1,int num2){
    num1 = num1+num2;
    num2 = num1-num2;
    num1=  num1-num2;
    printf("\nAfter Swapping without using Temp variable \nNum1 is : %d\nNum2 is :%d",num1,num2);
}

void main(){
    int num1,num2;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&num1,&num2);
    swap_without_temp(num1,num2);
}
