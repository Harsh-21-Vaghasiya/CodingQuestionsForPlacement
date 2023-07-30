#include <iostream>
using namespace std;
int main()
{
    for (int i = 5; i > 0; i--)
    {
        int count=1;
        for (int j = 0; j < i; j++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    
    return 0;
}