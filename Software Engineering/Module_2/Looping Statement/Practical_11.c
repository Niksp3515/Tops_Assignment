#include<stdio.h>

void main(){
    char names[5][30];

   printf("Enter 5 names:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }
    
}