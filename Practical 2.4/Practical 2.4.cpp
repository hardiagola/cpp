#include<iostream>
using namespace std;

class item
{
    int id;
    string name;
    float price;
    int quantity;

public:
    void increase_stock(float);
    void item_sell(float);
    void display_items();
    item(int ID, string NAME, float PRICE, int Que)
    {
        id=ID;
        name=NAME;
        price=PRICE;
        quantity=Que;

    }

};
void item::increase_stock(float add)
{
    quantity+=add;
}
void item::item_sell(float sell)
{
    if(quantity>=sell)
    {
        quantity-=sell;
    }
    else
    {
        cout<<"OOPS! insufficient amount!"<<endl;
    }
}
void item::display_items()
{
    cout<<"Item id :"<<id<<endl;
    cout<<"Item name :"<<name<<endl;
    cout<<"Price :"<<price<<endl;
    cout<<"Quantity :"<<quantity<<endl;
}

int main()
{
    item i1(01,"pasta",500,10);
    int ch;
    float add,sell;
n:
    cout<<"------------------------------------------------------"<<endl;
    cout<<"1. Increase the stock\n2. Sell the item\n3. Display item\n4.Exit"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cin>>ch;

    switch(ch)
    {
    case 1:
        cout<<"Enter the amount:"<<endl;
        cin>>add;

        i1.increase_stock(add);
        goto n;

    case 2:
        cout<<"Enter the amount to sell"<<endl;
        cin>>sell;

        i1.item_sell(sell);
        goto n;

    case 3:
        i1.display_items();
        goto n;

    case 4:
        cout<<"Thank you"<<endl;
        break;
    default:
        cout<<"Please enter a valid choice!"<<endl;
        goto n;



    }
}
