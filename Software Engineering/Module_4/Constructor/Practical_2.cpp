#include<iostream>
using namespace std;

class Prac_1{
    private:
    double a,b;

    public:
    Prac_1(){
        cout<<"Enter First Number: ";
        cin>>a;
        cout<<"Enter Second Number : ";
        cin>>b;
    }

    double display(){
        char ch;
        cout<<"Enter (+) for  Addition or (-) for Subtraction or (*) for Multiplication or (/) for Division :";
        cin>>ch;
        switch(ch){
            case '+' : return a+b;
                       break;
            case '-':  return a-b;
                      break;
            case '*':  return (a*b);
                       break;
            case '/': if (b == 0)
                        {
                        cout<<"Invalid Input!!!";
                        }
                        return a/b;
            default: cout<<"Enter Valid Case!!!";
                        break;
        }
    }    
};

int main(){
    Prac_1 p;
    p.display();
}