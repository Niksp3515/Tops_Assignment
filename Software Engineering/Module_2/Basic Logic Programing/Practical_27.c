#include<stdio.h>
void main(){
    int days;
    printf("Enter Days: ");
    scanf("%d",&days);

    int month = (days/30);
    int day = days%30;
    printf("\n%d Months and %d days.",month,day);
}