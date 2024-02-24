#include <stdio.h>
#include <string.h>

struct Employee {
    int empno;
    char name[50];
    float salary;
};

union Data {
    int intValue;
    float floatValue;
    char stringValue[20];
};

int main() {
    // Structure usage
    struct Employee s1;
    s1.empno = 1001;
    strcpy(s1.name, "Nikhil");
    s1.salary = 50000.0;

    printf("Using Structure:\n");
    printf("Employee Number: %d\n", s1.empno);
    printf("Name: %s\n", s1.name);
    printf("Salary: %.2f\n\n", s1.salary);

    // Union usage
    union Data u1;
    u1.intValue = 10;
    printf("Using Union (Integer Value): %d\n", u1.intValue);

    u1.floatValue = 25.5;
    printf("Using Union (Float Value): %.2f\n", u1.floatValue);

    strcpy(u1.stringValue, "Hello");
    printf("Using Union (String Value): %s\n", u1.stringValue);

    printf("\nSize of Structure: %lu bytes\n", sizeof(struct Employee));
    printf("Size of Union: %lu bytes\n", sizeof(union Data));

    return 0;
}
