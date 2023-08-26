#include <iostream>
using namespace std;

void sum(int *a, int *b)
{
// cout<<a;
    *a=*b;
}
int main()
{
    int a = 2;
    int b = 3;

    int *ptr=&a;
// cout<<*ptr;

    sum(ptr, &b);
    cout << a << " " << b;
    return 0;
}