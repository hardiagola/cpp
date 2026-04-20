#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base Constructor" << endl;
    }

    // Virtual destructor
    virtual ~Base() {
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base {
private:
    int* ptr;

public:
    Derived() {
        cout << "Derived Constructor" << endl;
        ptr = new int[3];
    }

    ~Derived() {
        cout << "Derived Destructor" << endl;
        delete[] ptr;
    }
};

int main() {
    Base* b;
    b = new Derived();

    cout << "\nDeleting object...\n";
    delete b;
    cout<<"\nHardi Agola-25CE002\n" ;

    return 0;
}
