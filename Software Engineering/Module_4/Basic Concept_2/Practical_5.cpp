#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    
    Rectangle rectangle(5, 3);

   
    cout << "Area of the rectangle: " << rectangle.calculateArea();

    cout << "\nPerimeter of the rectangle: " << rectangle.calculatePerimeter();

}
