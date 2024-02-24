#include<stdio.h>
void Palindrome(int x){
    int rem,rev=0,org=x;
    while(x>0){
        rem = x % 10;
        rev = rev * 10 + rem;
        x /= 10;
    }
    if (org == rev)
    {
        printf( "%d is a palindrome\n",org);
    }
    else{
        printf( "%d is not a palindrome\n",org);
    
    }
}
void main(){
    int n[3];
    int i =0;
    while (i < 3)
    {
        printf("Enter Nuber %d : ",i+1);
        scanf("%d",&n[i]);
        i++;
    }
    for (int i = 0; i < 3; i++)
    {
        Palindrome(n[i]);
    }
}