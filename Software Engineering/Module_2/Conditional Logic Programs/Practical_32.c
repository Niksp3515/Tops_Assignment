#include <stdio.h>

void main() {
    float basicSalary, hra, da, grossSalary;

    printf("Enter the Basic Salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 10000) {
        hra = 0.20 * basicSalary;
        da = 0.80 * basicSalary;
    } else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.90 * basicSalary;
    } else {
        hra = 0.30 * basicSalary;
        da = 0.95 * basicSalary;
    }
    grossSalary = basicSalary + hra + da;

    printf("\nBasic Salary: %.2f", basicSalary);
    printf("\nHRA: %.2f", hra);
    printf("\nDA: %.2f", da);
    printf("\nGross Salary: %.2f\n", grossSalary);
}
