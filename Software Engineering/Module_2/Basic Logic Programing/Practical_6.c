#include<stdio.h>
void main(){
    float a;
    printf("Enter Breadth : ");
    scanf("%f",&a);
    float b;
    printf("Enter Height : ");
    scanf("%f",&b);
    float area = 0.5*b*a;
    printf("Area of Triangle is : %.2f",area);
} 
