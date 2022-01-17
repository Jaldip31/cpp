#include <iostream>
using namespace std;
class test
{
    int x, y, z;

    public:
    void insertdata()
    {
        cout << "x :";
        cin >> x;
        cout << "y :";
        cin >> y;
        cout << "z :";
        cin >> z;
    }
    void printdata()
    {
        cout << x;
        cout << y;
        cout << z;
    }
    void multi()
    {
        cout << "\nx*y*z :" << x * y * z;
    }
};
int main()
{
    test t1;
    t1.insertdata();
    t1.printdata();
    t1.multi();
}
/*
x :3
y :2
z :4
324
x*y*z : 24
*/