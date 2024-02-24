#include<stdio.h>
void Max(int arr[]){
    int max;
    max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Maximum Number is : %d",max);
}
void main(){
    int arr[10] = {2,4,6,8,3,5,56,14,89,10};
    Max(arr);  
}