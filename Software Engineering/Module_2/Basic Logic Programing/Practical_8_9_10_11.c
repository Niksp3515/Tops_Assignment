#include <stdio.h>

// Function to calculate circumference of a rectangle
double rectangle_circumference(double a) {
    return 4 * a;
}

// Function to calculate perimeter of a triangle
double triangle_perimeter(double a, double b, double c) {
    return a + b + c;
}

// Function to calculate area of a rectangular prism
double rectangular_prism_area(double w, double l, double h) {
    return 2 * (w * l + w * h + h * l);
}

// Function to calculate circumference of a square
double square_circumference(double a) {
    return 4 * a;
}

void main() {
    double a, b, c, w, l, h;

    // Rectangle
    a = 5;
    printf("Circumference of rectangle: %.2f\n", rectangle_circumference(a));

    // Triangle
    a = 3;
    b = 4;
    c = 5;
    printf("Perimeter of triangle: %.2f\n", triangle_perimeter(a, b, c));

    // Rectangular prism
    w = 3;
    l = 4;
    h = 5;
    printf("Area of rectangular prism: %.2f\n", rectangular_prism_area(w, l, h));

    // Square
    a = 4;
    printf("Circumference of square: %.2f\n", square_circumference(a));
}