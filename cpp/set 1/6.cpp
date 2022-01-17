//using namespace std;
#include <iostream>
using namespace std;
class consover
{
    int i;

public:
    consover()
    {
        cout << "\n Default cons";
    }
    consover(int n)
    {
        cout << "\n one int " << n;
    }
    consover(double d)
    {
        cout << "\n one double" << d;
    }
    consover(int n, int m)
    {
        cout << "\n two int" << n + m;
    }
    consover(double a, double b, double c)
    {
        cout << "\n double sum" << a + b + c;
    }
};
int main()
{
    consover obj1;
    consover obj2(5);
    consover obj3(3.6);
    consover obj4(5.2, 3);
    consover obj5(2.2, 3.6, 5.1);
}
/*
 Default cons
 one int 5
 one double3.6
 two int8
 double sum10.9
 */