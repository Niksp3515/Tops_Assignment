#include<stdio.h>

void main(){
    char c = 'A';
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ",c);
            c++;            
        }
        printf("\n");
        
    }
       
}

// for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%c ",(char)j+65);
//             c++;            
//         }
//         printf("\n");
        
//     }