#include <iostream>
using namespace std;
class test
{
    int n;

public:
    test(int a)
    {
        n = a;
        cout << "\nconstructor called...." << a;
    }
    ~test()  //destructor
    {
        cout << "\nconstructor destructor...." << n;
    }
};
int main()
{
    test t1(1), t2(2), t3(3);
}
/*

constructor called....1
constructor called....2
constructor called....3
constructor called....3
constructor called....2
constructor called....1
*/