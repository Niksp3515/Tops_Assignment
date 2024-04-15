#include<iostream>
using namespace std;
class Cricketer{
 protected:
    double runs,average;
    public:
    void setData(){
        cout<<"Enter Runs : ";
        cin>>runs;
        cout<<endl<<"Enter Average runs : ";
        cin>>average;
    }
};

class Batsman: public Cricketer{
    public:
    void display(){
        cout<<endl<<"Total Runs : "<<runs;
        cout<<endl<<"Enter Average : "<<average;
    }
};

int main(){
string name;
cin>>name;
cout<<endl<<name;
Batsman b1;
b1.setData();
b1.display();
}