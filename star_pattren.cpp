#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            cout << " ";
        }
        for (int z = i; z >= 0; z--)
        {
            cout << "*";
        }
        for (int z = 1; z <= i; z++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 5; i >1; i--)
    {
        for (int j = i; j < 5; j++)
        {
            cout << " ";
        }
        for (int z = i; z >= 0; z--)
        {
            cout << "*";
        }
        for (int z = 1; z <= i; z++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}