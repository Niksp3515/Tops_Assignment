#include <stdio.h>
#include <ctype.h>

void main() {
    char str1[20],str2[20],str3[40];
    int i=0, j=0;

    printf("Enter a string 1: ");
    gets(str1);
    printf("\nEnter a string 2: ");
    gets(str2);

    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        j++;i++;
    }
    i=0;
    while (str2[i] != 0)
    {
        str3[j] = str2[i];
        j++;i++;
    }
    str3[j] = '\0';
    printf("Concated String is : %s",str3);    
}
