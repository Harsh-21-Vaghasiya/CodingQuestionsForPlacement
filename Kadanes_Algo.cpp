#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, -1, 10, -5, 7, -2};

    int ans=arr[0];
    int sum=0;


    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        sum=sum+arr[i];
    }

    if (sum<0)
    {
        sum=0;
    }
    
    if (ans<sum)
    {
        ans=sum;
    }

    
    

 
    cout<<"Maximum Value is :- "<<ans;
    
    return 0;
}