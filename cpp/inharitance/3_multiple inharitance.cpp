//multiple inharitance
#include <iostream>
using namespace std;
class base1
{
public:
    base1()
    {
        cout << "1base";
    }
};
class base2
{
public:
    base2()
    {
        cout << "\n2base";
    }
};
class base3
{
public:
    base3()
    {
        cout << "\n3base";
    }
};
class derived : public base1, public base2, public base3
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
1base
2base
3base
derived
*/