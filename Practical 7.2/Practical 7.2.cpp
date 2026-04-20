#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:

    Complex(double r = 0.0, double i = 0.0) {
        real = r;
        imaginary = i;
    }

    Complex operator+(const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imaginary = imaginary + obj.imaginary;
        return temp;
    }


    Complex operator-(const Complex& obj) {
        Complex temp;
        temp.real = real - obj.real;
        temp.imaginary = imaginary - obj.imaginary;
        return temp;
    }

    void display() {
        cout << real;

        if (imaginary >= 0) {
            cout << " + " << imaginary << "i";
        } else {

            cout << " - " << -imaginary << "i";
        }
        cout << endl;
    }
};

int main() {
    cout << "--- Complex Number Operations ---\n\n";


    Complex c1(4.5, 3.0);   // 4.5 + 3.0i
    Complex c2(2.0, 5.5);   // 2.0 + 5.5i
    Complex c3(1.5, -2.0);  // 1.5 - 2.0i

    cout << "Number 1 (c1): ";
    c1.display();
    cout << "Number 2 (c2): ";
    c2.display();
    cout << "Number 3 (c3): ";
    c3.display();

    cout << "\n--- Addition ---\n";
    Complex sum1 = c1 + c2;
    cout << "c1 + c2 = ";
    sum1.display();

    Complex sum2 = c1 + c3;
    cout << "c1 + c3 = ";
    sum2.display();

    cout << "\n--- Subtraction ---\n";
    Complex diff1 = c1 - c2;
    cout << "c1 - c2 = ";
    diff1.display();

    Complex diff2 = c2 - c3;
    cout << "c2 - c3 = ";
    diff2.display();

    cout<<"\nHardi Agola-25CE002\n";

    return 0;
}
