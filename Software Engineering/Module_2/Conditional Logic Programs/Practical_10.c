#include<stdio.h>
void main(){
    int num;
    printf("Enter an Integer: ");
    scanf("%d",&num);

    if (num < 0)
    {
        printf("%d is negative.",num);
    }
    else if(num == 0){
        printf("%d is zero.",num);
    }
    else
    {
        printf("%d is Positive.",num);
    }
    
    
}