#include<stdio.h>
#include<string.h>

void main(){
    int apl=0,digits=0,sp=0;
    char c[30];
    printf("Enter Any String : ");
    gets(c);


    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] >= 'a' && c[i] <= 'z')
        {
            apl++;
        }
        else if (c[i] >= '0' && c[i] <= '9')
        {
            digits++;
        }
        else{
            sp++;
        }
    }
    printf("%d alphabets",apl);
    printf("\n%d Digits",digits);
    printf("\n%d Special Characters",sp);
    
}