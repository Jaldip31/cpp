//oprator overload
#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    complex operator+(complex const &obj)
    {
        complex r;
        r.real = real + obj.real;
        r.imag = imag + obj.imag;
        return r;
    }
    void print()
    {
        cout << real << " " << imag << endl;
    }
};
int main()
{
    complex c1(10, 5), c2(2, 4);
    complex c3 = c1 + c2;
    c3.print();
}
/*
12 9
*/