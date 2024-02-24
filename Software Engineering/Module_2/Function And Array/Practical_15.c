#include<stdio.h>
    void ascending(int arr[]){
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5 ; j++)
        {
            if (arr[i]  > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }    
  }

  void descending(int arr[]){
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5 ; j++)
        {
            if (arr[i]  < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}
void main(){
    int a1[5],b1[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number at a[%d] : ",i+1);
        scanf("%d",&a1[i]);
    }
    printf("\n-----------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number at b[%d] : ",i+1);
        scanf("%d",&b1[i]);
    }
    printf("Enter 1 for Ascending and 2 for Descending: ");
    int ch;
    scanf("%d",&ch);
    if (ch == 1)
    {
        printf("\nElements in Ascending Order:\n");
    ascending(a1);
    printf("\n");
    ascending(b1);
    }
    else{
         printf("\n\nElements in Descending Order:\n");
        descending(a1);
    printf("\n");

        descending(b1);
    }


}