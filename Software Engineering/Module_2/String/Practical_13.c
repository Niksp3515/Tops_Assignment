#include <stdio.h>
#include <ctype.h>

int main() {
    char str[150];
    int i, j;

    printf("Enter a string: ");
    gets(str);

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';  

    printf("String with only alphabets: %s", str);

    return 0;
}
