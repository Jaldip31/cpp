//area_of_triangle
#include <iostream>
using namespace std;
class area
{
    int l, b;

public:
    area()
    {
        cin >> l;
        cin >> b;
        cout << "ans : " << (l * b) / 2;
    }
    ~area()
    {
    }
};
int main()
{
    area t1;
}
/*
10 5
ans : 25
*/