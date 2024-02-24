#include<stdio.h>
void main(){
    int min;
    printf("Enter Minutes: ");
    scanf("%d",&min);

    int sec,hour;
    sec = min * 60;
    hour = min/60;

    printf("\n%d Hours and %d Seconds",hour,sec);
}