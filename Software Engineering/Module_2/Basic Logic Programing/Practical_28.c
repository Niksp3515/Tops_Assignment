#include<stdio.h>
void main(){
    int year;
    printf("Enter the year: ");
    scanf("%d" ,&year);

    int day,month;
    day = 365 * year;
    month = day/30;
    
    printf("%d years equal to %d Months and %d Days. ",year,month,day);
}