#include <iostream>
using namespace std;

class Marks {
    public:
        int mark1, mark2;
        void getMarks() {
            cout << "Enter marks for subject 1 and 2: ";
            cin >> mark1 >> mark2;
        }
};

class Student {
    public:
        int rollNo;
        void getRollNo() {
            cout << "Enter roll no: ";
            cin >> rollNo;
        }
};

class MarkSheet : public Marks, public Student {
    public:
        void displayMarkSheet() {
            cout << "Roll No: " << rollNo << endl;
            cout << "Marks in subject 1: " << mark1 << endl;
            cout << "Marks in subject 2: " << mark2 << endl;
        }
};

int main() {
    MarkSheet obj;
    obj.getMarks();
    obj.getRollNo();
    obj.displayMarkSheet();
}