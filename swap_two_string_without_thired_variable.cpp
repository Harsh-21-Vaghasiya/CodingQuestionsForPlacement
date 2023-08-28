#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "Helloa";
    string str2 = "World";

    cout << "Before swapping:\n";
    cout << "str1: " << str1 << "\n";
    cout << "str2: " << str2 << "\n";

    // Swap the strings without using std::swap and without a third variable
    int length1 = str1.length();
    int length2 = str2.length();

    

    // str1 = str1 + str2;
    // str2 = str1.substr(0, length1);
    // str1=str1.substr(length1,length1+length2);

             

    cout << "\nAfter swapping:\n";
    cout << "str1: " << str1 << "\n";
    cout << "str2: " << str2 << "\n";

    return 0;
}
