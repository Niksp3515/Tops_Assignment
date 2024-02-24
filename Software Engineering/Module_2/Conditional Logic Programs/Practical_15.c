#include<stdio.h>

void main(){
    int total,phy,chem,maths,python;
    printf("Enter the marks in Physics : ");
    scanf("%d",&phy);
    printf("\n Enter the marks in Chemistry : ");
    scanf("%d",&chem);
    printf("\n Enter the marks in Mathematics : ");
    scanf("%d",&maths);

    total = phy+chem+maths;

   if (maths >= 65 && phy >= 55 && chem >= 50 && total >= 190) {
        printf("The candidate is eligible.\n");
    } else if ((maths + phy) >= 140) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }
    
}