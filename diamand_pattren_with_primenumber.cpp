#include <iostream>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    int num = 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j < i; j++)
        {
            while (!isprime(num))
            {
                num++;
            }
            cout << num << " ";
            num++;
        }

        cout << endl;
    }

    for (int i = n; i >=1; i--)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            while (!isprime(num))
            {
                num++;
            }
            cout << num << " ";
            num++;
        }

        cout << endl;
    }
}