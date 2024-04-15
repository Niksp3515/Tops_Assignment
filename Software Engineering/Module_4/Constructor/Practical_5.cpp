#include<iostream>
using namespace std;

class Triangle{
    private:
    int s1,s2,s3;

    public:
    void setData(){
        cout<<"Enter First Side of Length : ";
        cin>>s1;
        cout<<"\nEnter Second Side of Length : ";
        cin>>s2;
        cout<<"\nEnter Third Side of Length : ";
        cin>>s3;
    }
    void check(){
        if (s1==s2 && s2==s3)
        {
            cout<<"\ntriangle is Equilateral.";
        }
        else if(s1==s2 || s2==s3 || s1==s3){
            cout<<"\nTriangle is Isoceles";
        }
        else{
                cout<<"\nTriangle is Scalene.";
        }
        
    }
}t1;

int main(){
    t1.setData();
    t1.check();
}