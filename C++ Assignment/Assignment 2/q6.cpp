// 6. Write a C++ program to demonstrate ATM money withdrawal process by taking following private data
// members:
// Accountno, balance;
// The withdrawal function should return remaining balance to the user and should deduct withdrawal amount
// from balance. If withdrawal amount > balance print appropriate message on screen (Not enough balance)
// The Deposit function should return updated balance to user.

#include<iostream>

using namespace std;

class Atm{
    private:
    int accountno;
    float balance;

    public:
    Atm(int accno, float bal){
        accountno = accno;
        balance = bal;
        }
    
    float withdraw(float amount){
        if(amount > balance){
            balance = balance-amount;
            return balance;
        }
        else{
            cout<<"Not enough balance"<<endl;
            return balance;
            }
        }

    float deposit(float amount){
        balance = balance + amount;
        return balance;
    }

    float bal(){
        return balance;
    }

};

int main(){
    Atm atm(12345, 1000);
    cout<<"Balanace: "<<atm.bal()<<endl;
    atm.withdraw(500);
    cout<<"Balanace after withdrawal: "<<atm.bal()<<endl;  
    atm.withdraw(500);

}