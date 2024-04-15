#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"This is from Constructor A.";
    }
};

class B : public A{
    public:
    B(int x){
        cout<<"\nThis is value from Constructor B : "<<x;
    }
};

class C :public B{
    public :
    C(int y,int x):B(x){
        cout<<"\nThis is value from Constructor C : "<<y;
    }
};

int main(){
    C c1(10,20);
}