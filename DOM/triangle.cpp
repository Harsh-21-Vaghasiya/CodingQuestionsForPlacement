#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    n=n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            if (j == n && i != 0)
            {
                cout << "*";
            }
            if (j != n)
            {
                cout << " ";

            }
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < n; j++)
        {
            if (j == 1)
            {
                cout << "*";
            }

            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n * 2 + 2; i++)
    {
        if (i % 2 == 0)
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }

    
}