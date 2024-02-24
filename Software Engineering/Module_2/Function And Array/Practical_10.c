#include <stdio.h>

int is_palindrome(int number) {
    int original_number = number;
    int reversed_number = 0;

    int num_digits = 0;
    while (number != 0) {
        number = number / 10;
        num_digits++;
    }

    for (int i = 0; i < num_digits; i++) {
        int digit = original_number % 10;
        reversed_number = reversed_number * 10 + digit;
        original_number = original_number / 10;
    }

    if (number == reversed_number) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (is_palindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}