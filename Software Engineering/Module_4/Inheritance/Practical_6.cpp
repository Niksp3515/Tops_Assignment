#include<iostream>
using namespace std;
class A{
    private:
    string name;
    int roll_no;
    protected:
    void setInfo(){
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"\nEnter Roll No. : ";
        cin>>roll_no;
    }
};

class B:public A{
    public:
    int marks;
    
    void setMarks(){
        setInfo();
        cout<<"\nEnter Marks : ";
        cin>>marks;
    }
}b1;

int main(){
    b1.setMarks();
}