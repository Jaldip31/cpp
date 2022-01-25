//operator overloading friend function
#include <iostream>
using namespace std;
class dis
{
public:
    int feet, inch;
    dis(int f = 0, int i = 0)
    {
        this->feet = f;
        this->inch = i;
    }
    friend dis operator+(dis &, dis &);
};
dis operator+(dis &d1, dis &d2)
{
    dis t;
    t.feet = d1.feet + d2.feet;
    t.inch = d1.inch + d2.inch;
    return t;
}
int main()
{
    dis d1(8, 9), d2(10, 5), d;
    d = d1 + d2;
    cout << "\n total feet "<< d.feet << " inch" << d.inch;
}
/*
 total feet 18 inch14
 */