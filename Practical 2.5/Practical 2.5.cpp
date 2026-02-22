#include<iostream>
#include<cmath>
using namespace std;

class loan
{
    int id;
    string name;
    float amount;
    float rate;
    int months;

public:
    float EMI_calculate();
    loan():id(01), name("Default"), amount(100000),  rate(10.0/12/100), months(12)
    {

    }
    loan(int ID,string NAME,float r,float a,int mon)
    {
        id=ID;
        name=NAME;
        amount=a;
        rate=r;
        months=mon;
    }
};
float loan::EMI_calculate()
{
    float EMI;
    EMI= (amount*rate*(pow(1+rate,months)))/
         (pow(1+rate,months)-1);
    return EMI;
}
int main()
{
    loan l1;
    float emi1,emi2;
    emi1=l1.EMI_calculate();
    loan l2(101,"hardi",3.0/12/100,1000,24);

    emi2=l2.EMI_calculate();

    cout<<"EMI of l1:"<<emi1<<endl;
    cout<<"Emi of l2:"<<emi2<<endl;
}
