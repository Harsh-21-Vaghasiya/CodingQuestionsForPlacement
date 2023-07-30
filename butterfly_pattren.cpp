#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }
        int space = 2 * 8 - i * 2;
        for (int i = 1; i <= space; i++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }

        cout << endl;
    }
    for (int i = 8; i >=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }
        int space = 2 * 8 - i * 2;
        for (int i = 1; i <= space; i++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {

            cout << "*";
        }

        cout << endl;
    }

    return 0;
}