#include <iostream>
#include <cmath>

using namespace std;

class NegativeNumberException
{
private:
    double invalidNumber;

public:

    NegativeNumberException(double num)
    {
        invalidNumber = num;
    }


    void displayError()
    {
        cout << "\n[ERROR] NegativeNumberException Thrown!\n";
        cout << "Invalid Input: " << invalidNumber << "\n";
    }
};


int main()
{
    double number;

    cout << "--- Square Root Calculator ---\n";
    cout << "Enter a number: ";
    cin >> number;

    try
    {

        if (number < 0)
        {
            throw NegativeNumberException(number);
        }


        double result = sqrt(number);
        cout << "\nSuccess! The square root of " << number << " is " << result << "\n";

    }

    catch (NegativeNumberException e)
    {
        e.displayError();
    }
    cout<<"\nHardi Agola - 25CE002\n";

    return 0;
}
