#include<iostream>
using namespace std;
class  Date{
    private:
    int day,month,year;
    public:
    void setData(){
        cout<<"Enter Day : ";
        cin>>day;
        cout<<"\nEnter Month : ";
        cin>>month;
        cout<<"\nEnter year:  ";
        cin>>year;
    }
    void check(){
        if (day > 31 || day <  1) 
        {
            cout<<"Inavlid day!!!!";
        }
        if (month>12 || month < 1) 
        {
            cout<<"\nInvalid Month!!!";
        }
        if (year <= 0)
        {
            cout<<"\nInvalid Year!!!";
        }  
    }
}d1;
int main(){
    d1.setData();
    d1.check();
}