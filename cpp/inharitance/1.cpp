//single inharitansce
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
class derived : public base
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
base
derived
*/