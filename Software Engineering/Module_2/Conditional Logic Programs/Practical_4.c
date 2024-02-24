#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    if (operator == '+') {
        result = num1 + num2;
    } else if (operator == '-') {
        result = num1 - num2;
    } else if (operator == '*') {
        result = num1 * num2;
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
        } else {
            printf("Error: Division by zero!\n");
            return 1; 
        }
    } else if (operator == '%') {
        if (num2 != 0) {
            result = (int)num1 % (int)num2;
        } else {
            printf("Error: Modulo by zero!\n");
            return 1;
        }
    } else {
        printf("Error: Invalid operator!\n");
        return 1;
    }

    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
}
