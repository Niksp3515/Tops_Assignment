#include <stdio.h>

int main() {
    double num1, num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;

    printf("After swapping (using multiplication and division):\n");
    printf("First number: %.2lf\n", num1);
    printf("Second number: %.2lf\n", num2);
}