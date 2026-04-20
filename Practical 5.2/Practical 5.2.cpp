#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string filename = "sample.txt";
    int l_count=0, w_count=0,c_count=0 ;
    ifstream infile;
    char ch;
    infile.open(filename,ios::in);
    if(!infile)
    {
        cout<<"oops! file does not exist!"<<endl;
    }

    else
    {

        string line;
    while(getline(infile,line))
    {
          l_count++;

        for(int i =0 ; i< line.length() ; i++)

            if(line[i]==' '|| line[i]=='\n' || line[i]=='\0' || line[i]=='\t')
            {

                w_count++;
            }
           else
        {

            c_count++;
        }


    }



    cout<<"lines : "<<l_count<<endl;
    cout<<"words : "<<w_count+l_count<<endl;
    cout<<"letters : "<<c_count<<endl;
    cout<<"\nHardi Agola-25CE002\n";


    }


}


