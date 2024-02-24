#include <stdio.h>

void main() {
    int n;
    double sum = 0.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum -= (double)i / (i + 1);
        } else {
            sum += (double)i / (i + 1);
        }
    }

    printf("The sum of the pattern up to n is: %.6lf\n", sum);
}
