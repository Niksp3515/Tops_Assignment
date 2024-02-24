#include<stdio.h>
void main(){
    char fname[20],mname[20],lname[30];
    printf("Enter First,Middle And Last Name: ");
    scanf("%s %s %s",&fname,&mname,&lname);
    printf("Abbreviate Form : %c. %c. %s",fname[0],mname[0],lname);
}