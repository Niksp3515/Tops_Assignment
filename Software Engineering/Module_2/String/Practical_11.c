#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[100];
    int i;

    printf("Enter a sentence: ");
    gets(sentence);

    printf("\nOriginal sentence: %s", sentence);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (islower(sentence[i])) {
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
    }

    printf("\nConverted sentence: %s", sentence);

    return 0;
}