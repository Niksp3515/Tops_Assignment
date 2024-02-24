#include <stdio.h>
void main() {
    int number, firstDigit, lastDigit;

    printf("Enter a number: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    while (number != 0) {
        firstDigit = number % 10;
        number /= 10;
    }

    int summation = firstDigit + lastDigit;
    printf("Summation of first and last digit: %d\n", summation);
}
