//copy constructor
#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    point(const point &j)
    {
        x = j.x;
        y = j.y;
    }
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
};
int main()
{
    point op1(53, 13);
    cout << "\n op1.x : " << op1.getx() <<"\top1.y :" << op1.gety();

    point op2 = op1; //object assignment
    cout << "\n op2.x : " << op2.getx() << "\top2.y :" << op2.gety();
}
/*
 op1.x : 53op1.y :13
 op2.x : 53op2.y :13
 */