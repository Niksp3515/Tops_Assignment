#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double Area() {
        return 3.14 * radius * radius;
    }

    double Circumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Circle myCircle(radius);

    cout << "Area of the circle: " << myCircle.Area();

    cout << "Circumference of the circle: " << myCircle.Circumference();
}
