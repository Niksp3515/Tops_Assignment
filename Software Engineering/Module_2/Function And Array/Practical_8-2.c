#include <stdio.h>

struct Employee {
    int empno;
    char name[50];
    char address[100];
    int age;
};

int main() {

    struct Employee employees[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Address: ");
        scanf("%s", employees[i].address);
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Name: %s\n", employees[i].name);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
    }

    return 0;
}
