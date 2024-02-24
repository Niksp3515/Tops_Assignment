#include<stdio.h>
#include<math.h>
void main(){
    int n;
    printf("Enter An Integer: ");
    scanf("%d",&n);

    printf("\nN^1 is : %d",n);
    printf("\nN^2 is : %.2f",pow(n,2));
    printf("\nN^3 is : %.2f",pow(n,3));
}