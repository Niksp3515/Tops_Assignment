#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID, double empSalary) {
        name = empName;
        employeeID = empID;
        salary = empSalary;
    }

    void setSalary(double newSalary) {
        salary = newSalary;
    }

    void getDetails() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
   
    Employee emp1("Nikhil Prajapati", 1, 50000.0);

    cout << "Employee Details:" << endl;
    emp1.getDetails();

    emp1.setSalary(55000.0);

    cout << "Updated Employee Details:" << endl;
    emp1.getDetails();

}
