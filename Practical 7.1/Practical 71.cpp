#include <iostream>
#include <cstring>

using namespace std;

class Calculator {
private:

    char operationNames[100][50];
    double results[100];
    int count;


    void saveResult(const char* name, double res) {
        if (count < 100) {
            strcpy(operationNames[count], name);
            results[count] = res;
            count++;
        } else {
            cout << "Memory full! Cannot store more results.\n";
        }
    }

public:

    Calculator() {
        count = 0;
    }


    int add(int a, int b) {
        int res = a + b;
        saveResult("Add (int, int)", res);
        return res;
    }

    double add(double a, double b) {
        double res = a + b;
        saveResult("Add (double, double)", res);
        return res;
    }

    double add(int a, double b) {
        double res = a + b;
        saveResult("Add (int, double)", res);
        return res;
    }


    double add(const double arr[], int size) {
        double sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        saveResult("Add (Array Sum)", sum);
        return sum;
    }

    int subtract(int a, int b) {
        int res = a - b;
        saveResult("Subtract (int, int)", res);
        return res;
    }

    double subtract(double a, double b) {
        double res = a - b;
        saveResult("Subtract (double, double)", res);
        return res;
    }


    int multiply(int a, int b) {
        int res = a * b;
        saveResult("Multiply (int, int)", res);
        return res;
    }

    double multiply(double a, double b) {
        double res = a * b;
        saveResult("Multiply (double, double)", res);
        return res;
    }


    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero attempted!\n";
            return 0;
        }
        double res = a / b;
        saveResult("Divide (double, double)", res);
        return res;
    }

    void displayResults() {
        cout << "\n--- Computation History ---\n";

        for (int i = 0; i < count; i++) {
            cout << i + 1 << ". " << operationNames[i]
                 << " = " << results[i] << endl;
        }
    }
};

int main() {
    Calculator calc;

    cout << "Performing Calculator Operations...\n";


    calc.add(10, 20);
    calc.add(5.5, 4.5);
    calc.add(10, 2.5);


    double myNumbers[] = {1.5, 2.5, 3.0, 4.0};
    calc.add(myNumbers, 4);


    calc.subtract(20, 5);
    calc.multiply(3.5, 2.0);

    calc.divide(10.0, 2.0);
    calc.divide(5.0, 0.0);


    calc.displayResults();
    cout<<"\nHardi Agola-25CE002\n";

    return 0;
}
