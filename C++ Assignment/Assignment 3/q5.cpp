// 5. Write a C++ program to demonstrate ATM money withdrawal and deposit process by taking
// following private data members:
// Accountno, balance;
// Account no and balance data member initialize using parameterized constructor
// Write three function 1. Deposit 2. Withdraw 3. Balance
// Write menu driven choice
// 1. Deposit
// 2. Withdraw
// 3. Balance
// 4. Exit
// Program stop execution when user enter choice


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
    
    void withdraw(float amount){
        if(amount < balance){
            balance = balance-amount;
        }
        else{
            cout<<"Not enough balance"<<endl;
            }
        }

    void deposit(float amount){
        balance = balance + amount;
    }

    float bal(){
        return balance;
    }

    
};

int main(){
    
    Atm a(123,0);
    float amount;


    int choice=0;


    while(choice!=4){

        cout<<"1. Deposit"<<endl;
        cout<<"2. Withdraw"<<endl;
        cout<<"3. Balance"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter amount to deposit: ";
                cin>>amount;
                a.deposit(amount);
                cout<<"Balance after deposit: "<<a.bal()<<endl;
                break;
            
            case 2:
                cout<<"Enter amount to withdraw: ";
                cin>>amount;
                a.withdraw(amount);
                cout<<"Balance after withdrawal: "<<a.bal()<<endl;
                break;
                
            case 3:
                cout<<"Balance: "<<a.bal()<<endl;
                break;
            case 4:
            cout<<"Exiting..."<<endl;
            choice = 4;
            break;
        }
    }
}