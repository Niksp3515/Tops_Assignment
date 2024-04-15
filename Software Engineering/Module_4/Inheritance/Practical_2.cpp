#include<iostream>
using namespace std;

class Rectangle{
    protected:
    double length,width;

    public:
    void getData(){
        cout<<"Enter Length of Rectangle: ";
        cin>>length;
        cout<<endl<<"Enter Width of Rectangle: ";
        cin>>width;
    }
};

class Area : public Rectangle{
    public:
    double area(){
        return  length*width;
    }
};

int main(){
    Area r1;
    r1.getData();
    cout<<"\nArea Of Rectangle : "<<r1.area();
}