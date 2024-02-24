#include <stdio.h>
#include <string.h>

int main() {
    char str[50];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("\nIndividual characters:\n");
    for (int i = 0; i < strlen(str); i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}