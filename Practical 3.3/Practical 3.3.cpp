#include<iostream>
using namespace std;

class employee
{
    int no;
    string name;
    long int balance;

public:
    static int count;
    void add_data();
    int update_data(int id);
    void display_data();

};

 int employee::count=0;

 void employee::add_data()
 {
     cout<<"\nEnter accout ID ";
    cin>>no;
    cin.ignore();
    cout<<"\nEnter accout name:";
    getline(cin,name);
    cout<<"\nEnter balance: ";
    cin>>balance;

 }
 void employee::display_data()
 {
     cout<<"Account number:"<<no<<endl;
     cout << "account Name: " << name << endl;
        cout << "balance: " << balance << endl;
        cout << "--------------------------" << endl;
 }
 int employee::update_data(int id)
 {
     string nm;
     long int bal;
    if(id==no)
    {
        cin.ignore();
        cout<<"Enter name:"<<endl;
        getline(cin,nm);
        name=nm;

        cout<<"Add new balance:"<<endl;
        cin>>bal;
        balance=bal;

    return 1;

    }
    else
    {
        return 0;
    }
 }
int main()
{
    int ch;
    int id;
    employee emp[50];

  x:  cout<<"1.add data\n2.update data\n3.display data\n4.exit.\n";
    cin>>ch;

    switch(ch)
    {
    case 1:
        emp[employee::count].add_data();
        employee::count++;
        goto x;

    case 2:
        cout<<"Enter the id of your account:\n";
        cin>>id;
        for(int i=0 ; i<employee::count ; i++)
        {
            if(emp[i].update_data(id)==1)
            {
                break;
            }
            if(i==employee::count)
        {
            cout<<"Accout not found!\n";
        }
        }
        goto x;

    case 3:
        for(int i=0 ; i<employee::count ; i++)
        {
           emp[i].display_data();
        }
        cout<<"==========================================================="<<endl;
        cout<<"Total accouts: "<<employee::count<<endl;

        goto x;
    case 4:
        cout<<"Thank you!"<<endl;
        break;

    default :
        cout<<"error"<<endl;


    }
}
