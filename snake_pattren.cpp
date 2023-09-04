#include <iostream>
using namespace std;
int main()
{
    int start = 1;
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        int end;
        if (i % 2 == 1)
        {
            end = start + n - 1;
            for (int j = start; j <= end; j++)
            {
                cout << j<<" ";
            }
        }
        else
        {

            end = start + n - 1;
            for (int j = end; j >= start; j--)
            {
                cout << j<<" ";
            }
        }
        start = end + 1;
        cout << endl;
    }
}

