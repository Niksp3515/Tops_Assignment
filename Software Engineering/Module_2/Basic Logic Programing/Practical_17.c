#include<stdio.h>
void main()
{
 float salary, years, monthly_premium;
  float quarterly_premium, half_yearly_premium, yearly_premium;
 
 printf("Enter your Salary/Package :");
 scanf("%d", &salary);
 
 printf("Enter life insurance policy term(in years):");
 scanf("%d", &years);
 
 printf("Your Monthly Premium    : %8.2f\n", salary/(years*12));
 printf("Your Quarterly Premium  : %8.2f\n", salary/(years*4));
 printf("Your Half Yearly Premium: %8.2f\n", salary/(years*2));
 printf("Your Yearly Premium     : %8.2f\n", salary/(years)); 
}