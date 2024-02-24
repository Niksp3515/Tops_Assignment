#include<stdio.h>
void main(){
    double bill,charge;
    printf("Enter the amount of your bill: ");
    scanf("%lf",&bill);

    if (bill > 800)
    {
        charge = (bill*18)/100;
        printf("Your Charge will be : %.2f",charge);
    }
    else{
        charge = 256;
         printf("Your Charge will be : %.2f",charge);
    }
        
}