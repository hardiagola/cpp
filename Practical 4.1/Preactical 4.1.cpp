#include<iostream>
using namespace std;

void insert_last(int *& arr,int size, int value)
{
    int *new_arr = new int[size+1];
    for(int i=0 ; i< size ; i++)
    {

        new_arr[i]=arr[i];
    }

    new_arr[size]=value;
    arr=new_arr;
}
void delete_e(int *& arr,int size , int index)
{
    if(index<=0 && index>size)
    {
        cout<<"Index not found!\n";
    }
    else
    {
        for(int i=index ; i<size ; i++)
        {
            arr[i]=arr[i+1];
        }
    }

}
void display(int *& arr , int size)
{
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}


int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter"<<n<<" elements\n";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the new element of the array:";
    cin>>x;
    insert_last(arr,n,x);


    n+=1;

    display(arr,n);

    int y;
    cout<<"Enter the index of the array you want to delete:";
    cin>>y;

    delete_e(arr , n , y);

    n-=1;

    display(arr,n);
    cout<<"\nHardi agola-25CE002";
    return 0;
}


