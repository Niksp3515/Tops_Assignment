#include<iostream>
using namespace  std;
class Overload{
    public : 
    void fun(int a,int b){
        cout<<"Sum of "<<a<<" and "<<b<<" is : "<<a+b;
    }
    void fun(float a,float b){
        cout<<"Subtraction of "<<a<<" and "<<b<<" is : "<<a-b;
    }
    void fun(double a,int b){
        cout<<"Multiplication of "<<a<<" and "<<b<<" is : "<<a*b;
    }
    void fun(double a,double b){
        cout<<"Sum of "<<a<<" and "<<b<<" is : "<<a/b;
    }
};

int main(){
    Overload obj;
    obj.fun(10.2,3);
}

