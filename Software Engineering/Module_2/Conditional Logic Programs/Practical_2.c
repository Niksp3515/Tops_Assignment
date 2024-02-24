#include<stdio.h>
void main(){
    int m;
    printf("Enter an Integer: ");
    scanf("%d",&m);

    if (m < 0)
    {
        printf("N is : -1.");
    }
    else if (m == 0)
    {
        printf("N is : 0.");
    }
    else{
        printf("N is : 1.");
    }
    
}