//operator overloading friend function
#include <iostream>
using namespace std;
class demo
{
public:
    int a, b, c;
    demo() {}
    demo(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    friend demo operator+(demo &d1, demo &d2);

};
demo operator+(demo &d1, demo &d2)
    {
        demo d;
        d.a = d1.a + d2.a;
        d.b = d1.b + d2.b;
        d.c = d1.c + d2.c;
        return d;
    }
int main()
{
    demo d1(10, 20, 30), d2(40, 50, 60);
    demo d3 = d1 + d2;
    cout << "\n total a : " << d3.a<<"\tb : " << d3.b<< "\tc : " << d3.c;
}
 //total a : 50 b : 70 c : 90