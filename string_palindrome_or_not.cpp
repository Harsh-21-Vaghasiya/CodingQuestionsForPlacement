#include <iostream>
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
    string s;
    cin >> s;

    string s2;
    s2 = reverses(s);
    cout << s2<<endl;

    int len=s2.length();
    
    bool ok = true;

if (s==s2)
{
    cout<<"success!"<<endl;
}
else
{
    cout<<"error!"<<endl;
}


    



    return 0;
}