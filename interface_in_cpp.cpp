#include <iostream>
using namespace std;

class base
{
    virtual void display() = 0;
};

class derived : public base
{
    public:
    void display()
    {
        cout << " derived";
    }
};
int main()
{
    derived d;
    derived de;
    d.display();
    return 0;
}