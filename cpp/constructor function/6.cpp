//object as argument & object as return
#include <iostream>
using namespace std;
class Example
{
public:
    int a, b;
    Example() {}
    Example(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    Example add(Example E1, Example E2)
    {
        Example j;
        j.a = E1.a + E2.a;
        j.b = E2.b + E2.b;
        return j;
    }
};
int main()
{
    Example E1(10, 20), E2(30, 40), E3;
    E3 = E3.add(E1, E2);
    cout << "\n E1 a " << E1.a << " b " << E1.b;
    cout << "\n E2 a " << E2.a << " b " << E2.b;
    cout << "\n\n E3 a " << E3.a << " b " << E3.b;
}
/*
 E1 a 10 b 20
 E2 a 30 b 40

 E3 a 40 b 80
 */