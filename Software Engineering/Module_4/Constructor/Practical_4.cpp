#include<iostream>
using namespace std;

class Bank{
    private:
    double accoutn_no,balance;

    public:
    void setData(){
        cout<<"\nEnter Account Number : ";
        cin>>accoutn_no;
        cout<<"\nEnter Intital Balance : ";
        cin>>balance;
    }
    void deposite(){
        int dep;
        cout<<"\nEnter Amount that you want to deposite: ";
        cin>>dep;
        cout<<"After Deposited updated amount is : "<<dep+balance;
    }
    void withdraw(){
        int with;
        cout<<"\nEnter Amount that you want to withdraw: ";
        cin>>with;
        if (with > balance)
        {
            cout<<"Insufficient Fund!!!";
        }
        else{
            cout<<"After Withdraw available balance is: "<<balance-with;
        }
        
    }
};

int main(){
    Bank b1;
    b1.setData();
    int n;
    cout<<"Make choice: \nEnter 1 for Deposite or 2 for withdraw: ";
    cin>>n;
    if (n==1)
    {
        b1.deposite();
    }
    else{
        b1.withdraw();
    }
    
}