#include<iostream>
using namespace std;

int main()
{

        string s[20],str;
        int sc[20]={0};
        int count =0;
        int k;

        cout<<"Enter your text:"<<endl;
        cin.ignore();
        getline(cin,str);

        for(int i = 0 ; i < str.length() ; i++)
        {
            if(str[i]>='A' && str[i]<= 'Z')
            {
                str[i]= str[i] + 32;
            }
        }

         int i=0;
         int j=0;
        while(str[i]!='\0')
        {
            string temp;
            while(str[i]!=' ' && str[i]!=' \n' && str[i]!='\t' && str[i]!='\0')
            {
                temp = temp + str[i];
                i++;
            }
            i++;
            if(j==0)
            {
                s[j]=temp;
                sc[j]=1;
                j++;
                count++;
            }
            else
            {
                for( k=0   ;k<j;k++)
                {
                    if(s[k]==temp)
                    {
                        sc[k]++;
                        break;
                    }
                }
                if(k==j)
                {
                    s[j]=temp;
                    sc[j]=1;
                    j++;
                    count++;
                }
            }
        }

        for(int i = 0 ; i!=count ; i++)
        {
            cout<<s[i]<<" : "<<sc[i]<<endl;

        }

        cout<<"\nHardi Agola-25CE002";



}

