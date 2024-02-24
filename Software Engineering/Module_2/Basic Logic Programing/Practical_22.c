#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, comp;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);


    amount = principal*(1 + (rate/100))*time;

    comp= amount - principal;

    printf("Amount after %.2lf years: %.2lf\n", time, amount);
    printf("Compound Interest after %.2lf years: %.2lf\n", time, comp);

    return 0;
}
