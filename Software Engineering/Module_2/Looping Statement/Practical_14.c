#include<stdio.h>


    int fact(int n){
        if (n == 0 || n == 1)
        {
            return 1;
        }
        else{
            return (n * fact(n-1));
        }
        
    }

void main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number %d: ",i+1);
        scanf("%d",&arr[i]);
    }

      for (int i = 0; i < 5; i++)
    {
        int result = fact(arr[i]);
        printf("factorial of %d is : %d\n",arr[i],result);
    }
    
}