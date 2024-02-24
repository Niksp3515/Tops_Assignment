#include<stdio.h>
#include<ctype.h>
void main(){
    char country[50];
    printf("Enter Country name: ");
    scanf("%s",country);

    printf("Abbreviate Form Of %s is : %c%c%cn",country,toupper(country[0]),toupper(country[1]),toupper(country[2]));
}