#include<stdio.h>

void main(){
    for (int i = 0; i < 11; i++)
    {
       if (i <= 5)
       {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        
       }
       else{
        for (int k = i; k < 11 ; k++)
        {
            printf("* ");
        }
        
       }
       printf("\n");
    }
       
}