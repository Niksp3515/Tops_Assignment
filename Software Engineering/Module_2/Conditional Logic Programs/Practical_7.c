#include<stdio.h>
void main(){
    int marks;
    printf("Enter your Marks out of 100: ");
    scanf("%d",&marks);

    if (marks < 33)
    {
        printf("Sorry!! You are Failed.");
    }
    else{
        printf("Congratulation!! You are Pass the Examination.");
    }
    
}