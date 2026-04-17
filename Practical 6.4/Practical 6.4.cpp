#include<iostream>
using namespace std;


class  Account {
protected:
    int accNo;
    float balance;

    float transaction[10];
    int index;

public:
    Account() {
        accNo = 0;
        balance = 0;
        index = 0;
    }

    Account(int a, float b) {
        accNo = a;
        balance = b;
        index = 0;
    }

    void deposit(float amt) {
        balance += amt;
        transaction[index++] = amt;
        cout << "Deposited: " << amt << endl;
    }

    virtual void withdraw(float amt) {
        if (amt <= balance) {
            balance -= amt;
            transaction[index++] = -amt;
            cout << "Withdrawn: " << amt << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }

    void showTransactions() {
        cout << "Transactions: ";
        for (int i = 0; i < index; i++) {
            cout << transaction[i] << " ";
        }
        cout << endl;
    }

    void undoLast() {
        if (index > 0) {
            float last = transaction[index - 1];
            balance -= last;
            index--;
            cout << "Last transaction undone!" << endl;
        } else {
            cout << "No transaction to undo!" << endl;
        }
    }
};

class SavingsAccount : public Account {
    float interestRate;

public:
    SavingsAccount(int a, float b, float r) : Account(a, b) {
        interestRate = r;
    }

    void addInterest() {
        float interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest Added: " << interest << endl;
    }
};

class CurrentAccount : public Account {
    float overdraftLimit;

public:
    CurrentAccount(int a, float b, float o) : Account(a, b) {
        overdraftLimit = o;
    }

    void withdraw(float amt) {
        if (amt <= balance + overdraftLimit) {
            balance -= amt;
            transaction[index++] = -amt;
            cout << "Withdrawn with overdraft: " << amt << endl;
        } else {
            cout << "Overdraft limit exceeded!" << endl;
        }
    }
};

int main() {
    cout << "---- Savings Account ----" << endl;
    SavingsAccount s(1, 6000, 6);

    s.deposit(1000);
    s.withdraw(2000);
    s.addInterest();
    s.display();
    s.showTransactions();
    s.undoLast();
    s.display();

    cout << "\n---- Current Account ----" << endl;
    CurrentAccount c(201, 4000, 2000);

    c.deposit(500);
    c.withdraw(4000);
    c.display();
    c.showTransactions();
    c.undoLast();
    c.display();
    cout<<"\n======================================="<<endl;
    cout<<"Hardi Agola - 25CE002"<<endl;

    return 0;

}

