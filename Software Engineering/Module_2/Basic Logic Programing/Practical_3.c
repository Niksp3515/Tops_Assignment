#include<stdio.h>
void main(){
    float pi = 3.14;
    int a;
    printf("Enter Radius of the circle : ");
    scanf("%d",&a);
    float area = pi*a*a;
    float cir = 2*pi*a;
    printf("\nArea of circle is : %.2f",area);
    printf("\nCircumference is : %.2f",cir);  
}