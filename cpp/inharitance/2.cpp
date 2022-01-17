//multilevel inharitance
#include <iostream>
using namespace std;
class base1
{
public:
    base1()
    {
        cout << "base1";
    }
};
class base2 : public base1
{
public:
    base2()
    {
        cout << "\n2base";
    }
};

class derived : public base2
{
public:
    derived()
    {
        cout << "\nderived";
    }
};
int main()
{
    derived d;
}
/*
base1
base2
derived
*/