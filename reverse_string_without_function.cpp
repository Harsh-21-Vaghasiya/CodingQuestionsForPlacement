#include <iostream>
#include <string>
using namespace std;

int main() {
string str = "Hello, World!";
    
cout << "Original String: " << str << endl;
    
    int length = str.length();
    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    
cout << "Reversed String: " << str << endl;
    
    return 0;
}
