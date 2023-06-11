#include<iostream>
using namespace std;


int main()
{
    int arr[]={1,2,3,4,5};
    int min=INT_MAX;
    int max=INT_MIN;

    for (int i = 0; i <sizeof(arr)/sizeof(arr[0]); i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
        
    }
    
    cout<<"max valuse is :"<<max<<"  And min valuse is "<<min;


    return 0;
}