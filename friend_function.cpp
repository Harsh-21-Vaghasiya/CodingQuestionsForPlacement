#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void set(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    // Using the friend function we can use the private data of class outside this class
    friend Complex sum(Complex a, Complex b);
    void prints()
    {
        cout << "Number of the objects is " << this->a << " + " << this->b << "i" << endl;
    }
};

Complex sum(Complex o1, Complex o2)
{
    Complex sum;

    // in friend function to acess the data member of any class we can use with the making object of that class
    sum.set(o1.a + o2.a, o1.b + o2.b);
    return sum;
}
int main()

{

    Complex complex, complex2, sums;

    complex.set(1, 2);
    complex2.set(3, 4);
    complex.prints();

    sums = sum(complex, complex2);
    sums.prints();
}