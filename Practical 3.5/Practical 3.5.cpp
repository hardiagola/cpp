#include<iostream>
#include<string>
using namespace std;

int super_digit(string s)
{
    int sum=0;
    if(s.length()==1)
    {
        int x= stoi(s);
        return x;

    }
    for(int i=0 ; i<s.length() ; i++)
    {
        sum+=s[i]-'0';
    }
    string str=to_string(sum);
    return  super_digit(str);
}


int main()
{
    string num;
    int k;
    cout<<"Enter the num:";
    cin>>num;
    cout<<"\nEnter k:";
    cin>>k;

    string s;
    for(int i=0 ; i<k ; i++)
    {
        s+=num;
    }
    int x= super_digit(s);

    cout<<"The super digit is:"<<x;
    return 0;
}
