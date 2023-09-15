#include <iostream>
#include <string>
using namespace std;
int main()
{

    //! Hear we can only store value in string variable is int or float like 45 or 45.5
    string name = "45";
    int num = stoi(name);
    cout << num;
}