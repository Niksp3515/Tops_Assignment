#include <stdio.h>
#include <string.h>

int main() {
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\nIndividual characters in reverse order:\n");
    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}