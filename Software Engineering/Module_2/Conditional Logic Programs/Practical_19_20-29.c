#include<stdio.h>

void main(){
    float id,unit,toatal;
    char name[40];

    printf("Enter Your Name: ");
    scanf("%s",name);
    printf("\nEnter Customer ID: ");
    scanf("%f",&id);
    printf("\nEnter The Unite that you used: ");
    scanf("%f",&unit);

    if (unit <= 350)
    {
        printf("\nThe amount to be paid is : %.2f",unit * 1.20);
    }
    else if (unit>350 && unit<=600)
    {
        printf("\nThe amount to be paid is : %.2f",unit * 1.50);
    }
    else if (unit>600 && unit <= 800)
    {
        printf("\nThe amount to be paid is : %.2f",unit * 1.80);
    }
    else{
        printf("\nThe amount to be paid is : %.2f",unit * 2.00);
    }
    
    
    
}