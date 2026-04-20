#include <iostream>
using namespace std;

class Fah;
class Cel
{
private:
    double temp;
public:
    Cel(double t = 0)
    {
        temp = t;
    }

    double get()
    {
        return temp;
    }

    void print()
    {
        cout << temp << " C";
    }


    operator Fah();
    bool operator==(Fah f);
};

class Fah
{
private:
    double temp;
public:
    Fah(double t = 0)
    {
        temp = t;
    }

    double get()
    {
        return temp;
    }

    void print()
    {
        cout << temp << " F";
    }

    operator Cel();
    bool operator==(Cel c);
};

Cel::operator Fah()
{
    return Fah((temp * 9.0 / 5.0) + 32.0);
}




Fah::operator Cel()
{
    return Cel((temp - 32.0) * 5.0 / 9.0);
}



int main()
{
    Cel c1(100);
    Fah f1(212);

    cout << "Conversion \n";


    Fah newFah = c1;
    c1.print();
    cout << "=";
    newFah.print();
    cout << endl;


    Cel newCel = f1;
    f1.print();
    cout << "=";
    newCel.print();
    cout << endl;

    cout<<"\nHardi Agola-25CE002\n";



    return 0;
}
