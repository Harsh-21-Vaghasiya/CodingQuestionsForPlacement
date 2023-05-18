#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string reverses(string a)
{
    string b = "";
    for (int i = a.length() - 1; i >= 0; i--)
    {
        b = b + a[i];
    }

    return b;
}
int main()
{
    string a;
    cout << "Enter a string :- ";
    // To get String with spaces
    getline(cin, a);

    cout << "Reverse String is :- " << reverses(a);

    return 0;
}