#include<stdio.h>
void Even_Odd(int arr[]){
    int even=0,sum_even=0,sum_odd=0,odd=0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
            sum_even+= arr[i];
        }
        else{
            odd++;
            sum_odd+=arr[i];
        }
        
    }
    printf("Even Numbers are : %d\n",even);
    printf("Even Numbers Sum is : %d\n",sum_even);
    printf("Odd Numbers are : %d\n",odd);
    printf("Odd Numbers Sum is : %d",sum_odd);
    
}

void main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
       printf("Enter number %d : ",i+1);
       scanf("%d",&arr[i]);
    }
    Even_Odd(arr);
    
}