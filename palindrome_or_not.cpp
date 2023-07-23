#include <iostream>
using namespace std;

int rev(int i)
{
    int rev = 0;
    while (i > 0)
    {

        rev = rev * 10 + i % 10;
        i = i / 10;
    }

    return rev;
}
int main()
{

    int i;
    cin >> i;
    int rev_no;
    rev_no = rev(i);

    if (rev_no == i)
    {
        /* code */ cout << "palindrome" << endl;
    }
    else
    {
        cout << "not" << endl;
    }

    return 0;
}