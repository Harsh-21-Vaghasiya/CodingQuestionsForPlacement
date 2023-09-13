#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 5, 2, 1, 8, 6};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i : arr)
    {
        cout << i << endl;
    }
}