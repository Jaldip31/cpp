//inhatitance virtual
#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "base class in invoked" << endl;
    }
};
class Dervied : public Base
{
public:
    void display()
    {
        cout << "Derived class in invoked " << endl;
    }
};
int main()
{
    Base *p, b;
    Dervied d;
    p = &b;
    p->display();
    p = &d;
    p->display();
    // dervied()
    // d.display();
    // Base b;
    // b.display();0

}
/*
base class in invoked
Derived class in invoked
*/