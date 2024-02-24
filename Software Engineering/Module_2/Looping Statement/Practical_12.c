#include<stdio.h>
#include<math.h>

void main(){
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    int rem,result=0,n=0,origin;
    origin = num;

    while (origin != 0)
    {
        origin/=10;
        n++;
    }
  
    origin = num;
    while (origin > 0)
    {
        rem = origin % 10;
        printf("%d\n",rem);
        int w1 = pow(rem,n);
        printf("\nCubes : %d\n",w1);
        result = result + pow(rem,n);
        
        origin /= 10;
    }
    

    if (result == num)
    {
        printf("%d is Armstrong Number.",num);
    }
    else{
        printf("%d is not Armstrong Number.",num);
    }
    
    
    
}