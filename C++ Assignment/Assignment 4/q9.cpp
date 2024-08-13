// 9. All the banks operating in India are controlled by RBI. RBI has set a well defined
// guideline (e.g. minimum interest rate, minimum balance allowed, maximum withdrawal limit
// etc) which all banks must follow. For example, suppose RBI has set minimum interest rate
// applicable to a saving bank account to be 4% annually; however, banks are free to use 4%
// interest rate or to set any rates above it.
// Write a program to implement bank functionality in the above scenario. Note: Create few
// classes namely Customer, Account, RBI (Base Class) and few derived classes (SBI, ICICI,
// PNB etc). Assume and implement required member variables and functions in each class.

#include <iostream>
#include <string>

class RBI {
public:
    RBI() : minInterestRate(4.0), minBalance(500), maxWithdrawalLimit(50000) {}

    double getMinInterestRate() const {
        return minInterestRate;
    }

    double getMinBalance() const {
        return minBalance;
    }

    double getMaxWithdrawalLimit() const {
        return maxWithdrawalLimit;
    }

private:
    double minInterestRate;
    double minBalance;
    double maxWithdrawalLimit;
};

class Bank : public RBI {
public:
    Bank(const std::string &bankName, double interestRate) : bankName(bankName) {
        setInterestRate(interestRate);
    }

    void setInterestRate(double rate) {
        if (rate >= getMinInterestRate()) {
            interestRate = rate;
        } else {
            interestRate = getMinInterestRate();
        }
    }

    double getInterestRate() const {
        return interestRate;
    }

    void displayBankDetails() const {
        std::cout << "Bank: " << bankName << "\n"
                  << "Interest Rate: " << interestRate << "%\n"
                  << "Minimum Balance: " << getMinBalance() << "\n"
                  << "Maximum Withdrawal Limit: " << getMaxWithdrawalLimit() << "\n";
    }

private:
    std::string bankName;
    double interestRate;
};

class Customer {
public:
    Customer(const std::string &name, double balance) : name(name), balance(balance) {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount, const Bank &bank) {
        if (amount <= balance && amount <= bank.getMaxWithdrawalLimit() && (balance - amount) >= bank.getMinBalance()) {
            balance -= amount;
        } else {
            std::cout << "Transaction failed. Check balance and withdrawal limits.\n";
        }
    }

    void displayCustomerDetails() const {
        std::cout << "Customer Name: " << name << "\n"
                  << "Balance: " << balance << "\n";
    }

private:
    std::string name;
    double balance;
};

int main() {

    Bank sbi("SBI", 4.5);
    Bank icici("ICICI", 5.0);
    Bank pnb("PNB", 4.2);

 
    sbi.displayBankDetails();
    icici.displayBankDetails();
    pnb.displayBankDetails();

    Customer cust("Vivek Sharma",1000);

    cust.displayCustomerDetails();

    cust.deposit(500);
    cust.withdraw(300, sbi);
    cust.displayCustomerDetails();

    cust.withdraw(2000, sbi); 

    return 0;
}

