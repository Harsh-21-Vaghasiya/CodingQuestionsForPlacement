#include <iostream>
using namespace std;
int squre(int x)
{

    // first method
    // int i=0;
    // while (i*i<x)
    // {
    //     i++;
    // }
    // return i-1;

    // second method

    int min = 1;
    int max = x;
    int ans;

    while (min <= max)
    {

        int mid = ((min + max) / 2) ;

        if ((mid * mid) > x)
        {
            max = mid - 1;
        }
        if (mid * mid == x)
        {
            return mid;
        }
        if (mid * mid < x)
        {
            ans=mid;
            min = mid + 1;
        }
    }

    return ans;
}

int main()
{
    cout<<squre(10);
}
