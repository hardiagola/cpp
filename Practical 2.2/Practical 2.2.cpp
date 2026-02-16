#include<iostream>
using namespace std;
class student
{
private:
    int roll_no;
    string name;
    int m[3];
    float p;

public:
    void print_avg();
    void get_data();
    student()
    {
        roll_no=1;
        name="Default";
       for (int i=0 ; i<3 ; i++)
       {
           m[i]=0;
       }
    }

};

void student::get_data()
{
    cout<<"Enter the name of the student:"<<endl;
    cin.ignore();
    getline(cin,name);
    cout<<"Enter roll number:"<<endl;
    cin>>roll_no;
    cout<<"Enter marks of 3 subject:"<<endl;
    for (int i=0 ; i<3 ; i++)
       {
           cin>>m[i];
       }
}
void student::print_avg()
{
    p=(m[0]+m[1]+m[2])/3.0;
    cout<<"Roll no:  "<<roll_no<<"  Avg marks:"<<p<<endl;
}
int main()
{
    student s[3];
    cout<<"Defaut data:"<<endl;
    for(int i=0 ; i<3 ; i++)
    {
        s[i].print_avg();
    }

    cout<<"Enter details of the students:"<<endl;

    for(int i=0 ; i<3 ; i++)
    {
        s[i].get_data();
    }

    cout<<"Detaiils of the students:"<<endl;
     for(int i=0 ; i<3 ; i++)
    {
        s[i].print_avg();
    }
    return 0;

}
