#include<stdio.h>
#include<string.h>

void main(){
    char ch[30];
    printf("Enter Any String : ");
    gets(ch);

    int i = 0,vowel=0,cons=0;
    while (ch[i] != '\0')
    {
        if (ch[i] == 'a'||ch[i] == 'e' ||ch[i] == 'i' ||ch[i] == 'o' ||ch[i] == 'u')
        {
            vowel++;
        }
        else{
            cons++;
        }
        i++;
        
    }
    printf("%d are vowels and %d are consonants.",vowel,cons);
    
}