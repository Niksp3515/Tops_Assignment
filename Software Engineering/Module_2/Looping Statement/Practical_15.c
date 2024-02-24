#include<stdio.h>

void main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    int sum=0;
    int i=0;
    while (i < 10)
    {
        sum += arr[i];
        i++;
    }
    printf("Sum is : %d",sum);
    
    
}