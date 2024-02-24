#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50];

    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\nNames of students:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}