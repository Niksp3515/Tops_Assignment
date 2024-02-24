#include<stdio.h>

void main(){
    int a[5],sum=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("Sum of Array is : %d",sum);
    
    
}