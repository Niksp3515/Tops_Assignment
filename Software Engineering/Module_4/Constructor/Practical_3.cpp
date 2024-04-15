#include<iostream>
using namespace std;

class Car{
private:
char company[50],model[50];
int year;

public:
void setData(){
    cout<<"Enter Comapny Name: ";
    gets(company);
    cout<<"Enter Model : ";
    gets(model);
    cout<<"Enter Year : ";
    cin>>year;
}

void getData(){
    cout<<"\nCompany Name is : "<<company;
    cout<<"\nModel Number is : "<<model;
    cout<<"\nYear is : "<<year;
}
};

int main(){
    Car c1;
    c1.setData();
    c1.getData();
}