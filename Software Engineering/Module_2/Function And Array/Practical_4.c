#include<stdio.h>
int fact(int x){
    if (x == 0 || x==1)
    {
       return 1;
    }
    else
    {
        return fact(x-1)*x;
    }
    
    
}
void main(){
    int n;
    printf("enter Number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d ",n,fact(n));
}