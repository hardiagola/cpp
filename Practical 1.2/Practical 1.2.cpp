#include<iostream>
using namespace std;

class Book
{
    int id;
    string tital;
    string author;
    int no_of_copies;

public:
    void add_book();
    int issue_book(string name);
    int return_book(int ID);
    void diplay_books();
};
void Book::add_book()
{

    cout<<"\nEnter book ID ";
    cin>>id;
    cin.ignore();
    cout<<"\nEnter book tital ";
    getline(cin,tital);
    cin.ignore();
    cout<<"\nEnter Author's name ";
    getline(cin,author);
    cout<<"\nEnter number of copies: ";
    cin>>no_of_copies;
}

int Book::issue_book(string name)
{
    if(tital==name)
    {
        if(no_of_copies>0)
        {
            cout<<"\nBook found and issued successfully\n";
            no_of_copies--;
            return 1;
        }
        else
        {
            cout<<"\nNo copies of that book available!\n";
        }
    }
    else
    {
        return 0;
    }
}

int Book::return_book(int ID)
{
    if(id==ID)
    {
    cout<<"\nBook returned successfully\n";
    no_of_copies++;
    return 1;

    }
    else
    {
        return 0;
    }
}
void Book:: diplay_books()
{
    cout<<"=================================================================\n";
    cout<<"\nEnter book ID"<<id;
    cout<<"\nbook tital"<<tital;
    cout<<"\nAuthor's name"<<author;
    cout<<"\nEnter number of copies"<<no_of_copies;
    cout<<"=================================================================\n";
}

int main()
{
    Book b[25];
    string name;
    int ch,last=0,ID;
n:
    cout<<"=================================================================\n";
    cout<<"1.Add the details of book. \n2.Issue a book. \n3.Return the book. \n4.Display all the books. \n5.Exit"<<endl;
    cout<<"=================================================================\n";
    cin>>ch;

    switch(ch)
    {
    case 1:
        b[last].add_book();
        last++;
        goto n;

    case 2:
        cout<<"enter the book you want to issue: ";
        cin>>name;
        for(int i=0; i<last ; i++)
        {
            if(b[i].issue_book(name)==1)
            {
                break;
            }
            if(i==last)
            {
                cout<<"Book not found!"<<endl;
            }
        }
        goto n;
    case 3:
        cout<<"enter the book ID you want to return: ";
        cin>>ID;
        for (int i=0 ; i<last ; i++)
        {
            if(b[i].return_book(ID)==1)
            {
                break;
            }
            if(i==last)
            {
                cout<<"Book not found!"<<endl;
            }
        }

        goto n;

    case 4:
        for(int i=0 ; i<last ; i++)
        {
            b[i].diplay_books();
        }
        goto n;
    case 5:
        cout<<"Thnak you!"<<endl;
    default:
        cout<<"Please enter a valid choice!"<<endl;
        goto n;
    }
    return 0;
}


