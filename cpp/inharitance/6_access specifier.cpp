//access specifier
#include <iostream>
using namespace std;
class Base
{
private:
    int pvt = 1;

protected:
    int prot = 2;

public:
    int pub = 3;
    int getpvt()
    {
        return pvt;
    }
};
class Derived : protected Base
{
public:
    int getprot()
    {
        return prot;
    }
    int getpublic()
    {
        return pub;
    }
};
int main()
{
    Derived obj;
    cout << "private " << obj.getpvt() << endl;
    cout << "protected " << obj.getprot() << endl;
    cout << "public " << obj.getpublic() << endl;
}