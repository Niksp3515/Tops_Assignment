#include<stdio.h>
void main(){
    float width,length;
    printf("Enter Width : ");
    scanf("%f",&width);
    printf("Enter Length : ");
    scanf("%f",&length);
    float area = width * length;
    printf("Area Of Rectangle is : %.2f",area);
} 
