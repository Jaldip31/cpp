//multiple inharitance
#include <iostream>
using namespace std;
class base
{
public:
    base()
    {
        cout << "\nbase";
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
class derived3 :public derived1,public derived2
{
public:
    derived3()
    {
        cout << "\n3derived";
    }
};

int main()
{
    derived3 d1;
}
/*
base
1derived
2derived
3derived
*/