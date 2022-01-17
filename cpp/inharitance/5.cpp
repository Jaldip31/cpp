//hierarchical inharitance
#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "base";
    }
};

class derived1 : public base
{
public:
    derived1()
    {
        cout << "\n1derived";
    }
};
class derived2
{
public:
    derived2()
    {
        cout << "\n2derived";
    }
};
class derived3
{
public:
    derived3()
    {
        cout << "\n3derived";
    }
};
int main()
{
    derived1 d1;
    derived2 d2;
    derived3 d3;
}
/*
base1
2base
3base
derived
*/