#include <stdio.h>

void main() {
    float angle1, angle2, angle3;

    printf("Enter the value of angle1: ");
    scanf("%f", &angle1);

    printf("Enter the value of angle2: ");
    scanf("%f", &angle2);

    printf("Enter the value of angle3: ");
    scanf("%f", &angle3);

    if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0) {
        printf("Triangle can be formed with the given angles.\n");
    } else {
        printf("Triangle cannot be formed with the given angles.\n");
    }
}
