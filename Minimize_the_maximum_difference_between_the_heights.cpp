#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int height(int arr[], int k, int n)
{
    sort(arr, arr + n);
    int ans = arr[n - 1] - arr[0];

    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;
    int mi, ma;

    for (int i = 0; i < n; i++)
    {
        mi = min(smallest, arr[i + 1] - k);
        ma = max(largest, arr[i + 1] + k);
        if (mi < 0)
        {
            continue;
        }
        ans = min(ans, ma - mi);
    }
    return ans;
}

int main()
{
    int arr[] = {4, 5, 7, 8, 12, 34};
    int k = 3;
    int length = sizeof(arr) / sizeof(arr[0]);

    cout << "Diffrence is :- " << height(arr, k, length);
    return 0;
}