#include<iostream>
#include<iomanip>
using namespace std;
class rec
{
    float length;
    float width,area,perimeter;

public:
    float cal_area();
    float  cal_perimeter();
    void add_data();
    void update_data(float, float);


};
inline float rec::cal_area()
{
    return area;
}
inline float rec::cal_perimeter()
{
    return perimeter;
}
void rec::add_data()
{
    cout<<"\nEnter length: "<<endl;
    cin>>length;
    cout<<"Enter width: "<<endl;
    cin>>width;

    area=length*width;
    perimeter=2*(length + width);
}
void rec::update_data(float l, float w)
{
    length=l;
    width=w;
    area=l*w;
    perimeter=2*(l+w);
}


int main()
{
    rec r[25];
    int n,ch,count=0,N;
    float l,w;
x:
    cout<<"\n----------------------------------------------------\n";
    cout<<"1.Add rectangel \n2.Display data \n3.Update data \n4.Exit";
    cout<<"\n----------------------------------------------------\n";
    cin>>ch;


    switch(ch)
    {
    case 1:
        cout<<"How many plot's data you want to enter:"<<endl;
        cin>>n;
        for(int i=0 ; i<n ; i++)
        {
            cout<<"Add the data of rectangle "<<i+1<<endl;
            r[i].add_data();
            count++;
        }
        goto x;
    case 2:
        cout<<"\n----------------------------------------------------\n";
        cout<<setw(10)<<"Rectangle "<<setw(12)<<"Area "<<setw(12)<<"Perimeter "<<endl;
        for(int i=0 ; i<count ; i++)
        {

            cout<<setw(10)<<i+1<<setw(12)<<r[i].cal_area()<<setw(12)<<r[i].cal_perimeter()<<endl;
        }
        cout<<"\n----------------------------------------------------\n";
        goto x;
    case 3:
        cout<<"\nEnter the no. of rectangle:";
        cin>>N;
        cout<<"Enter new length and new width:"<<endl;
        cin>>l>>w;

        r[N-1].update_data(l,w);
        goto x;
    case 4:
        cout<<"\nThank you!"<<endl;
    default:
        cout<<"\nError\n";
        goto x;
    }
    return 0;
}
