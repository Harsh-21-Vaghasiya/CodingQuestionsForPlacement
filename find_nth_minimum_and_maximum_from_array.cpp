#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[]={1,3,2,5,4};
    int length=sizeof(arr)/sizeof(arr[0]);


    sort(arr,arr+length);

    cout<<"Enter nth max and min value";
    int nmax,nmin;
    cin>>nmax>>nmin;


cout<<"Minimum element is "<<arr[nmax-1];

// SORTING IN DEC3ENDING ORDE

sort(arr,arr+length,greater<int>());

cout<<"Maximum element is "<<arr[nmax-1];

    return 0;

}