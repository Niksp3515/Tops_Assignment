#include <iostream>
using namespace std;

inline int multiply(int num1, int num2) {
    return num1 * num2;
}

inline int cubic(int num) {
    return num * num * num;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int mulValue = multiply(number, 2);
    cout << "Multiplication value: " << mulValue << endl;

    int cubicValue = cubic(number);
    cout << "Cubic value: " << cubicValue << endl;

}
