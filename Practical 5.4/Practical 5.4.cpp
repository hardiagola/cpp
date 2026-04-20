#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

ostream& currency(ostream& os) {

    os << "$";
    return os;
}

struct Student {
    string name;
    int marks;
    double percentage;
    double fees;
};

int main() {

    Student students[3] = {
        {"hardi", 420, 84.00, 1500.50},
        {"Riya", 385, 77.00, 1500.50},
        {"Palsi", 490, 98.00, 1500.50}
    };

    cout << setfill('-') << setw(55) << "-" << endl;
    cout << setfill(' ');

    cout << left << setw(15) << "Student Name"
         << right << setw(10) << "Marks"
         << right << setw(15) << "Percentage(%)"
         << right << setw(15) << "Fees Paid" << endl;

    cout << setfill('-') << setw(55) << "-" << endl;
    cout << setfill(' ');


    for (int i = 0; i < 3; i++) {
        cout << left << setw(15) << students[i].name
             << right << setw(10) << students[i].marks

             << right << setw(15) << fixed << setprecision(2) << students[i].percentage

             << right << setw(8) << " " << currency << fixed << setprecision(2) << students[i].fees
             << endl;
    }
    cout << setfill('-') << setw(55) << "-" << endl;


    cout << "\n\n";
    cout << setfill('*') << setw(40) << "*" << endl;

    cout << setfill(' ') << "*" << setw(26) << " FEE RECEIPT " << setw(13) << "*" << endl;
    cout << setfill('*') << setw(40) << "*" << endl;

    cout << setfill(' ');

    cout << left << setw(20) << " Name:" << students[0].name << endl;
    cout << left << setw(20) << " Course:" << "Computer Science" << endl;
    cout << left << setw(20) << " Amount Paid:" << currency << fixed << setprecision(2) << students[0].fees << endl;

    cout << setfill('*') << setw(40) << "*" << endl;

    return 0;
}
