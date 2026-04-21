#include <iostream>

using namespace std;

int main()
{
    int num, den;
    try
    {
        cout << "Enter Numerator: ";
        cin >> num;

        if (cin.fail())
        {
            throw "Invalid Input! You must enter a valid integer.";
        }

        cout << "Enter Denominator: ";
        cin >> den;

        if (cin.fail())
        {
            throw "Invalid Input! You must enter a valid integer.";
        }

        if (den == 0)
        {
            throw "Math Error! Division by zero is not allowed.";
        }
        double result = (double)num / den;
        cout << "\nResult: " << num << " / " << den << " = " << result << endl;

    }
    catch (const char* errorMessage)
    {

        cout << "\n[EXCEPTION CAUGHT]: " << errorMessage << endl;


        if (cin.fail())
        {
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
    cout<<"\nHardi Agola-25CE002\n";

    return 0;
}
