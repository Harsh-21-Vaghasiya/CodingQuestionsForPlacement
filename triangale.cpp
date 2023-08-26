#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 6; j >=i; j--)
        {
            cout<<"*";
        }
        for (int j = 0; j < (i*2)-1; j++)
        {
            cout<<" ";
        }
       for (int j = 6; j >=i; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
     for (int i = 7; i >0; i--)
    {
        for (int j = 7; j >i; j--)
        {
            cout<<" ";
        }
        for (int j = 0; j < (i*2)-1; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
}