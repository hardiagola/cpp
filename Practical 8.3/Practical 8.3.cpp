#include <iostream>

using namespace std;


const char* logs[50];
int logCount = 0;


void addLog(const char* message) {
    logs[logCount] = message;
    logCount++;
}

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    void deposit(double amount) {
        addLog("deposit()");
        if (amount <= 0) {
            throw "Error: Deposit must be positive!";
        }
        balance += amount;
        addLog("deposit() successful");
    }

    void withdraw(double amount) {
        addLog("withdraw()");
        if (amount > balance) {
            throw "Error: Not enough money!";
        }
        balance -= amount;
        addLog(" withdraw() successful");
    }
};


void doTransaction(BankAccount& acc, double amount) {
    addLog("doTransaction()");

    acc.withdraw(amount);
    addLog(" doTransaction() successful");
}


int main() {
    BankAccount acc(500);

    cout << "Processing transactions...\n";


    try {
        addLog("\n--- Valid RS.200 Withdrawal ---");
        doTransaction(acc, 200);
    } catch (const char* e) {
        addLog(e);
    }

    try {
        addLog("\n--- Invalid RS.1000 Withdrawal ---");
        doTransaction(acc, 1000);
    } catch (const char* e) {
        addLog(e);
    }


    cout << "\n--- Final Transaction Logs ---\n";
    for (int i = 0; i < logCount; i++) {
        cout << logs[i] << "\n";
    }

    cout<<"\nHardi Agola-25CE002\n";

    return 0;
}
