#include <stdio.h>

int main() {
    double exp[5];
    double totalexp = 0, avgexp;

    for (int i = 0; i < 5; ++i) {
        printf("Enter expense %d:", i + 1);
        scanf("%lf", &exp[i]);

        totalexp += exp[i];
    }

    avgexp = totalexp / 5;

    printf("\nTotal Expense: %.2lf\n", totalexp);
    printf("Average Expense: %.2lf\n", avgexp);

    return 0;
}
