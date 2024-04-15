#include<iostream>
using namespace std;

class Students{
    protected :
    int roll_no;
    public:
    void setData(){
        cout << "Enter Roll Number : ";
        cin >> roll_no;
    }
};

class Test : public Students{
    protected : 
    int maths, science;

    public : 
    void setMarks(){
        cout << "\nEnter Marks of Maths : ";
        cin >> maths;
        cout << "\nEnter  Marks of Science : ";
        cin >> science;
    }
};

class Result : public Test{
    public : 
    void Total(){
        cout << "\nTotal Marks is : "<<maths+science;
    }
    void display(){
        cout << "\nRoll_no is : "<<roll_no;
        cout << "\nMarks in Maths : "<<maths;
        cout << "\nMarks in Science : "<<science;
        Total();
    }
};

int main(){
    Result r1;
    r1.setData();
    r1.setMarks();
    r1.display();
}