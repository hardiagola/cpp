#include<iostream>
using namespace std;

class person
{
protected:
    string name;
    int age;
    char gender;
public:
    void P_getdata()
    {
        cin.ignore();
        cout<<"Enter name:"<<endl;

        getline(cin,name);

        cout<<"Enter age:"<<endl;
        cin>>age;
        cout<<"Enter gender (M/F/T):"<<endl;
        cin>>gender;
    }

    void p_display()
    {
        cout<<"Name :"<<name<<endl<<"Age :"<<age<<endl<<"Gender :"<<gender<<endl;
    }
    person()
    {
        name = "hardi";
        age= 19;
        gender = 'F';
    }

};

class employee : public person
{
protected:
    int id;
public:
    void e_getdata()
    {
        P_getdata();
        cout<<"Enter Id :"<<endl;
        cin>>id;
    }
    void e_display()
    {
        p_display();
        cout<<"Id :"<<id;
    }
};

class manager :  public employee
{
protected:
    string dept;
public:
    void m_getdata()
    {

        e_getdata();
        cout<<"Enter deparment:"<<endl;
        cin.ignore();
        getline(cin,dept);

    }
    void m_display()
    {
        e_display();
        cout<<"Department :"<<dept;
    }

};

int main()
{
    manager m;
   m.P_getdata();
    m.p_display();

}

