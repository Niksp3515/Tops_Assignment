#include <stdio.h>
#include<string.h>
void main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    ch = tolower(ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("The character is a Vowel\n");
            break;
        default:
            printf("The character is a Consonant\n");
    }
}
