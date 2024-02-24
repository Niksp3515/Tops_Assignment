#include<stdio.h>
#include<string.h>

void main(){
    char ch[30];
    puts("Enter Any String : ");
    gets(ch);
    char cp[30];
    strcpy(cp,ch);
    printf("%s is Copied String",cp);
}