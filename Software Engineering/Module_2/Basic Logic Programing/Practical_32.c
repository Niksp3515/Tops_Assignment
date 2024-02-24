#include <stdio.h>
#include <limits.h>

void main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;

    printf("Sum: %d\n", sum);

    if (sum > INT_MAX || sum < INT_MIN) {
        printf("Sum is too large to fit in an int.\n");
    } else {
        printf("Size of the sum: %lu bytes\n", sizeof(sum));
    }
}
