#include<iostream>
using namespace std;

template<class T>
T max_value(T array[],int size)
{
    T max=array[0];
    for(int i=0 ; i<size ; i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }

    return max;
}

template<class T>
void reverse_arr(T arr[],int size)
{
    for(int i=0 ; i<size/2 ; i++)
    {
        T tem;
        tem=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=tem;
    }
}

template<class T>
void leader(T arr[],int size)
{
    T temp=arr[size-1];
    cout<<temp<<" ";
    for(int i=size-2 ; i>=0 ; i--)
    {

        if(arr[i]>temp)
        {
           cout<<arr[i]<<" ";
           temp=arr[i];

        }
    }
}

int main()
{
    int arr1[]={3,15,96,65,21,3,85};
    cout<<"int array:"<<endl;
    int x=max_value(arr1,sizeof(arr1)/sizeof(arr1[0]));
    cout<<x<<endl;

    float arr2[]={32.6,52.3,1.2,569.4,36.4};
    cout<<"float array:"<<endl;
    float y=max_value(arr2,sizeof(arr2)/sizeof(arr2[0]));
    cout<<y<<endl;

    char arr3[]={'a','g','o','l','a','h','a','r'};
     cout<<"char array:"<<endl;
    char z=max_value(arr3,sizeof(arr3)/sizeof(arr3[0]));
    cout<<z<<endl;

    reverse_arr(arr1,sizeof(arr1)/sizeof(arr1[0]));
    reverse_arr(arr2,sizeof(arr2)/sizeof(arr2[0]));
    reverse_arr(arr3,sizeof(arr3)/sizeof(arr3[0]));

    for(int i=0; i<sizeof(arr1)/sizeof(arr1[0]) ; i++)
    {
        cout<<arr1[i]<<"  ";
    }

    cout<<endl;
     for(int i=0; i<sizeof(arr2)/sizeof(arr2[0]) ; i++)
    {
        cout<<arr2[i]<<"  ";
    }

    cout<<endl;
     for(int i=0; i<sizeof(arr3)/sizeof(arr3[0]) ; i++)
    {
        cout<<arr3[i]<<"  ";
    }

    cout<<endl;
    leader(arr1,sizeof(arr1)/sizeof(arr1[0]));
    cout<<endl;
    leader(arr2,sizeof(arr2)/sizeof(arr2[0]));
    cout<<endl;
    leader(arr3,sizeof(arr3)/sizeof(arr3[0]));
    cout<<endl;






}

