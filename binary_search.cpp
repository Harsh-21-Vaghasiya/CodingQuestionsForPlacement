#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int binary(int arr[], int len, int key)
{
    int s = 0;
    int e = len;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (key >= arr[mid])
        {
            s = mid + 1;
        }
        if (key <= arr[mid])
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{

    int arr[10] = {0, 2, 1, 1, 3, 4, 5, 6, 7, 8};
    int length = sizeof(arr) / sizeof(arr[0]);

    int k = binary(arr, length, 3);
    cout << k;

    return 0;
}