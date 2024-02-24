#include<stdio.h>

void main(){
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Numner %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Numner %d is : %d \n",i+1,a[i]);
    }
}