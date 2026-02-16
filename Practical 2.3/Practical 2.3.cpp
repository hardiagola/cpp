#include<iostream>
using namespace std;

class account
{
    string name;
    int id;
    long double balance;

public:
    void create_acc();
    int deposit_money(int ID);
    int withdraw_money(int ID);
    int display_summary(int ID);
    account()
    {
        balance=0;
    }
    static int count;
};
void account::create_acc()
{
    cin.ignore();
    cout<<" \n Enter username: ";
    getline(cin,name);
    cout<<"\n Enter User ID: ";
    cin>>id;
    cout<<"\n Enter balance: ";
    cin>>balance;


}

int account::deposit_money(int ID)
{
    long double money;
    if(id==ID)
    {
x:
        cout<<"How much money you want to deposit:"<<endl;
        cin>>money;

        if(money>0)
        {
            balance+=money;
            return 1;
        }
        else
        {
            cout<<"Enter valid amount."<<endl;
            goto x;
        }
    }
}
int account::withdraw_money(int ID)
{
    long double money;
    cout<<"How much money you want to withdraw:"<<endl;
    cin>>money;
    if(id==ID){
    if(money>0 || money<=balance)
    {
        balance-=money;
        return 1;
    }
    else if(money<0)
    {
        cout<<"Please enter valid amount!"<<endl;
        return 0;
    }
    else
    {
        cout<<"you do not have sufficient balace!"<<endl;
        return 0;

    }

    }
}
int account::display_summary(int ID)
{
    if(id==ID){
    cout<<"\n======================================\n";
    cout<<"User name: "<< name <<endl;
    cout<<"User ID: "<<id<<endl;
    cout<<"Current balance: "<<balance<<endl;
    cout<<"\n======================================\n";
    }
}
int account::count=0;
int main()
{
    account a[25];
    int ch,ID;

n:
    cout<<"=================================================================\n";
    cout<<"1.Create an accout. \n2.Deposit money. \n3.Withdraw money. \n4.Display summary. \n5.Exit"<<endl;
    cout<<"=================================================================\n";
    cin>>ch;

    switch(ch)
    {
    case 1:

        a[account::count].create_acc();
        account::count++;
        goto n;

    case 2:
        cout<<"Enter the id of your account:"<<endl;
        cin>>ID;
        for(int i=0 ; i<account::count ; i++)
        {
            if(a[i].deposit_money(ID)==1)
            {
                break;
            }
            else
            {
                cout<<"Account not found!"<<endl;
            }
        }
        goto n;
    case 3:
        cout<<"Enter the id of your account:"<<endl;
        cin>>ID;
        for(int i=0 ; i<account::count ; i++)
        {
            if(a[i].withdraw_money(ID)==1)
            {
                break;
            }
            else
            {
                cout<<"Account not found!"<<endl;
            }
        }
        goto n;
    case 4:
        cout<<"Enter the id of your account:"<<endl;
        cin>>ID;
        for(int i=0 ; i<account::count ; i++)
        {
            if(a[i].display_summary(ID)==1)
       {
           break;
       }
       else
        {
            cout<<"account not found!";
        }
        goto n;
        }
    default:
        cout<<"Enter valid choice";

    }
 return 0;
}
