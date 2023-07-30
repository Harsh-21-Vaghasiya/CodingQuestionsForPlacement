#include <iostream>
using namespace std;
int main()
{
    int arr[8]={1,2,0,7,2,0,2,2};

    int mx = -1;
    int ans = 0;

    for (int i = 0; i < 4; i++)
    {
        if (mx <= arr[i] && arr[i] >= arr[i + 1])
        {
            mx=max(mx,arr[i] - arr[i]);
            ans++;
        }
    }

    cout << ans ;
}