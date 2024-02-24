#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    profit = sellingPrice - costPrice;
    loss = costPrice - sellingPrice;

    if (profit > 0) {
        printf("Profit: %.2f\n", profit);
    } else if (loss > 0) {
        printf("Loss: %.2f\n", loss);
    } else {
        printf("No profit, no loss.\n");
    }
}
