#include<stdio.h>
void main(){
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ",(char)j+65);
        }
        printf("\n");
    }
    
}