#include <stdio.h>

void main() {
    double m_salary, i_premium, loan, rem_salary;

    printf("Enter your monthly salary: ");
    scanf("%lf", &m_salary);

    i_premium = m_salary * 0.10;
    loan = m_salary * 0.10;

    rem_salary = m_salary - i_premium - loan;

    printf("Remaining salary after deductions: %.2lf\n", rem_salary);
}