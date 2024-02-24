#include<stdio.h>
#include<string.h>

void main(){
   char na[100],st1[10][20];
   int i=0,j=0,k=0,m=0,n=0 ,max,min;
   printf("Enter Line of String : ");
   gets(na);
   for ( i = 0; na[i] != '\0'; i++)
   {
    if (na[i] == ' ')
    {
        st1[k][j] = '\0';
        k++;
        j=0;
    }
    else{
        st1[k][j] = na[i];
        j++;
    }
    
   }
   
   st1[k][j] = '\0';
   max = strlen(st1[0]);
   min = strlen(st1[0]);
   for ( i = 0; i <= k; i++)
   {
    if (max < strlen(st1[i]))
    {
        m = i;
    }
    if (min > strlen(st1[i]))
    {
        n = i;
    }
    
    
   }
   printf("\n Largest Word is  : %s",max);
   printf("\n Smallest Word is  : %s",min);
   
}