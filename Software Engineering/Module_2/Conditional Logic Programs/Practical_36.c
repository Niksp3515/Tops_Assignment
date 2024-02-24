#include <stdio.h>
void main() {
    float unitCharges, totalBill;

    printf("Enter the Electricity Unit Charges: ");
    scanf("%f", &unitCharges);

    if (unitCharges <= 50) {
        totalBill = unitCharges * 0.50;
    } else if (unitCharges <= 150) {
        totalBill = unitCharges * 0.75;
    } else if (unitCharges <= 250) {
        totalBill = unitCharges * 1.20;
    } else {
        totalBill = unitCharges * 1.50;
    }

    totalBill += 0.20 * totalBill;

    printf("\nElectricity Unit Charges: %.2f", unitCharges);
    printf("\nTotal Electricity Bill: %.2f\n", totalBill);
}
