#include <iostream>

class BankAccount {
private:
    // Static variable shared by all BankAccount objects
    
    static int totalAccounts;

    // Static variable used as an ID generator

    static int idSeed;

    //  Unique account ID for each object
    int accountID;

    // Account balance
    double balance;

public:

    BankAccount(double initBalance) {
        balance = initBalance;   
        accountID = ++idSeed;    
        ++totalAccounts;         
    }


    ~BankAccount() {
        --totalAccounts;         
    }

 
    static int getTotalAccounts() {
        return totalAccounts;
    }

  
    int getAccountID() const {
        return accountID;
    }
};


int BankAccount::totalAccounts = 0;  
int BankAccount::idSeed = 1000;       

int main() {
  
    // 🔹 Create first account with an initial balance of 500
    BankAccount a1(500.0);

    //  Create second account with an initial balance of 1000
    BankAccount a2(1000.0);

    //  Display total number of accounts created
    std::cout << "Total accounts: " << BankAccount::getTotalAccounts() << "\n";

    //  Display account ID of the first account
    std::cout << "Account ID 1: " << a1.getAccountID() << "\n";

    //  Display account ID of the second account
    std::cout << "Account ID 2: " << a2.getAccountID() << "\n";
}
