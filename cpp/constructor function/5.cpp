#include <iostream>
using namespace std;
class intrest
{
    int p, r, n;

public:
    intrest()
    {
        cin >> p;
        cin >> r;
        cin >> n;
        cout << p * r * n / 100;
    }
    ~intrest()
    {
    }
};
int main()
{
    intrest t1;
}
/*
100 3 10
30
*/