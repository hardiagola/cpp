#include<iostream>
using namespace std;

class fuel
{
protected :
    string type;
public:
    fuel()
    {
        type="diesel";
    }
    void f_getdata()
    {
        cin.ignore();
        cout<<"\nEnter Type name: "<<endl;
        getline(cin,type);
    }
    string f_display()
    {
        return type;
    }
};
class vehicle
{
protected:
    string brand;
public:
    vehicle()
    {
        brand="KIA";
    }
    void v_getdata()
    {
        cin.ignore();
        cout<<"\nEnter Brand name: "<<endl;
        getline(cin,brand);
    }
    string b_display()
    {
        return brand;
    }
};

class car : public fuel, public vehicle
{
public:
    void display()
    {
        cout<<"Details of the car:"<<endl;
        cout<<"\nBrand: "<<b_display();
        cout<<endl;
        cout<<"\nFuel Type: "<<f_display();
        cout<<endl;
    }
    void getdata()
    {
        cout<<"Enter details of the car: "<<endl;
        f_getdata();
        cout<<endl;
        v_getdata();
        cout<<endl;

    }

};

int main()
{
    int n,n1;
    cout<<"Enter number of cars: "<<endl;
    cin>>n;
    car c[n];
    for(int i = 0 ; i< n ; i++)
    {
        c[i].getdata();
        cout<<"-------------------------------"<<endl;
    }
    for(int i = 0 ; i< n ; i++)
    {
        c[i].display();
        cout<<"-------------------------------"<<endl;
    }

    cout<<"==========================================================="<<endl;
    cout<<"Enter new number of cars: "<<endl;
    cin>>n1;

    car *p = new car[n1];

    for(int i = 0 ; i< n ; i++)
    {
        p[i].getdata();
        cout<<"-------------------------------"<<endl;
    }
    for(int i = 0 ; i< n ; i++)
    {
        p[i].display();
        cout<<"-------------------------------"<<endl;
    }
    cout<<"\nHardi Agola-25CE002"<<endl;

}
