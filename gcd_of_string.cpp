#include <iostream>
#include <string>

using namespace std;

string gcdOfStrings(string str1, string str2) {
    int len1 = str1.length();
    int len2 = str2.length();

    // Check if str1 is divisible by str2
    if (len1 < len2) {
        return gcdOfStrings(str2, str1);
    } else if (str1.substr(0, len2) == str2) {
        string remaining = str1.substr(len2);
        if (remaining.empty()) {
            return str2;
        }
        return gcdOfStrings(remaining, str2);
    }

    
    return "";
}

int main() {
    string str1, str2;
    cout << "Enter str1: ";
    cin >> str1;
    cout << "Enter str2: ";
    cin >> str2;

    string largestDivisor = gcdOfStrings(str1, str2);

    cout << "The largest string that divides both str1 and str2 is: " << largestDivisor;

    return 0;
}
