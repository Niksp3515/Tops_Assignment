#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    float balance;

public:
    BankAccount(string name, string accNum, string accType, float initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Amount " << amount << " deposited successfully." << endl;
    }

    void withdraw(float amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Amount " << amount << " withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    void display() {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {

    BankAccount myAccount("Nikhil Prajapati", "123456789", "Savings", 1000.0);

    cout << "Initial Account Details:" << endl;
    myAccount.display();

    myAccount.deposit(500.0);

    cout << "\nAccount Details after deposit:" << endl;
    myAccount.display();

    myAccount.withdraw(200.0);

    cout << "\nAccount Details after withdrawal:" << endl;
    myAccount.display();

    return 0;
}
