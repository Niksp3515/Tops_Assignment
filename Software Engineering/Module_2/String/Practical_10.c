#include <stdio.h>

void substring(char source[], int start, int length, char result[]) {
    int i, j;

    for (i = start, j = 0; j < length && source[i] != '\0'; ++i, ++j) {
        result[j] = source[i];
    }

    result[j] = '\0';
}

int main() {
    char source[100], result[100];
    int start, length;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    printf("Enter start index: ");
    scanf("%d", &start);

    printf("Enter length: ");
    scanf("%d", &length);

    substring(source, start, length, result);

    printf("Substring: %s\n", result);

}
