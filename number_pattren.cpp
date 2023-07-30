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
        for (int z = 1; z < i; z++)
        {
            cout <<z ;
        }
        for (int z = i; z >0; z--)
        {
            cout <<z ;
        }
        cout<<endl;
    }

    return 0;
}