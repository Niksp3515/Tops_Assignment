#include <stdio.h>

void main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {   printf("(");
        for (int j = 1; j <= i; j++)
        {
            printf( "%d",j);
            if(i == j || j == n){
                    printf(")");}
            sum += j;
            if (j != n)
            {

                printf(" + ");
            }  
        }        
    }
    printf(" = %d",sum);    
}
