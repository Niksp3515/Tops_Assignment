#include <stdio.h>

int main() {
    int month;

    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    if (month >= 1 && month <= 12) {
 
        int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        printf("Number of days in month %d: %d\n", month, daysInMonth[month - 1]);
    } else {
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}
