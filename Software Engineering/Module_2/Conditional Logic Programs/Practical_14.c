#include<stdio.h>

void main(){
    int n1,n2,n3;
    printf("Enter Three Digits: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if (n1 > n2)
    {
        if (n1 > n3)
        {
           printf("%d is Greatest.",n1);
        }
        else{
            printf("%d is Greatest.",n3);
        }
        
    }

    else{
        if (n2 > n3)
        {
            printf("%d is Greatest.",n2);
        }
        else{
            printf("%d is Greatest.",n3);
        }
        
    }
    
}