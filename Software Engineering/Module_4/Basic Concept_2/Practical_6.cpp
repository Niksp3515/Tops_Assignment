#include<iostream>
using namespace std;
class Person{
    private:
    char name[50],country[50];
    int age;

    public:
    void setData(){
        cout<<"\nEnter Name : ";
        gets(name);
        cout<<"\nEnter Age : ";
        cin>>age;
        fflush(stdin);
        cout<<"\nEnter Country : ";
        gets(country);
    }
    void getData(){
        cout<<"\nName is : "<<name;
        cout<<"\nAge is : "<<age;
        cout<<"\nCountry is : "<<country;

    }
};

int main(){
    Person p;
    p.setData();
    p.getData();
}