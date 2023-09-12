#include <iostream>
#include <vector>
#include <string>

using namespace std;
string rev(string s)
{
    string s2="";
    for (int i = s.size()-1; i >=0; i--)
    {
        s2+=s[i];
    }
    return s2;
    
}

int main()
{
    string s = "Hello Harsh";

    vector<string> words;

    string s2 = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            words.push_back(rev(s2));
            s2 = "";
        }
        else
        {
            s2 += s[i];
        }
    }

    words.push_back(rev(s2));

    for (int i = 0; i < words.size(); i++)
    {
        cout << words[i] << " ";
    }

    return 0;
}
