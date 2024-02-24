#include <stdio.h>

void main() {
    char names[5][50];
    double salaries[5];
    double totalSalary = 0, averageSalary;

    for (int i = 0; i < 5; ++i) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter salary of employee %d: ", i + 1);
        scanf("%lf", &salaries[i]);

        totalSalary += salaries[i];
    }

    averageSalary = totalSalary / 5;

    printf("\nTotal Salary: $%.2lf\n", totalSalary);
    printf("Average Salary: $%.2lf\n", averageSalary);
}
