#include <iostream>
using namespace std;

class base
{
public:
    virtual void display()
    {
        cout << "This is the base class";
    }
};

class derived : public base
{
public:
    void display()
    {
        cout << "This is the derived class";
    }
};

int main()
{
    base *basee;
    base obj;
    derived obj2;
    basee=&obj2;
    basee->display();
    return 0;
}
