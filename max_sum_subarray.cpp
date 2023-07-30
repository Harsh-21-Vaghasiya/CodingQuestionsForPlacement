// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//  int maxsum = 0;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }
//             maxsum=max(maxsum, sum);
//         }
//     }

// cout << maxsum;
//     return 0;
// }


// Second Method with less time compxity

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int csum[n + 1];
    csum[0] = 0;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        csum[i] = csum[i - 1] + arr[i - 1];
    }

    int maxsum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = csum[i] - csum[j];
            maxsum = max(maxsum, sum);
        }
    }

    cout << maxsum;
}