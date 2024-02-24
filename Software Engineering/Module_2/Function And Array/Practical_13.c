#include <stdio.h>

int main() {
    int numbers[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    printf("\nEven numbers:\n");
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d\n", numbers[i]);
        }
    }

    printf("\nOdd numbers:\n");
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            printf("%d\n", numbers[i]);
        }
    }

    return 0;
}