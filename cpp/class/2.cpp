#include <iostream>
using namespace std;
class test
{
    int x;

public:
    void setData(int a)
    {
        x = a;
    }
    int getdata()
    {
        return x;
    }
};
int main()
{
    test t1;
    t1.setData(10);
    cout << "x : " << t1.getdata();
}
/*
x : 10
*/