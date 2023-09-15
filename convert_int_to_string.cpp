#include <iostream>
#include <string>
#include<bits/stdc++.h>
#include<typeinfo>
using namespace std;
int main()
{

    //! Hear we can only store value in string variable is int or float like 45 or 45.5
    int name = 45;
    string num = to_string(name);
    cout << typeid(num).name();
}