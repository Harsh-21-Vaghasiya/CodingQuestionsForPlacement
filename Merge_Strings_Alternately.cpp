#include <iostream>
#include <string>
using namespace std;
int main()
{

    string word1 = "ab";
    string word2 = "pqrs";

    string s;
    int length1 = word1.length();
    int length2 = word2.length();
    int i = 0;
    int j = 0;

    while (i < length1 && j < length2)
    {
        s = s + word1[i++];
        s = s + word2[j++];
    }

    while (i < length1)
    {
        s = s + word1[i++];
    }
    while (j < length2)
    {
        s = s + word2[j++];
    }

    cout << s;
}

