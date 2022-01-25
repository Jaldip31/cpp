// area_of_triangle
#include <iostream>
using namespace std;
class triangle
{
    int l, b;

public:
    void set()
    {
        cout << "enter l :";
        cin >> l;
        cout << "enter b :";
        cin >> b;
    }
    int get()
    {
        return (l * b) / 2;
    }
};
int main()
{
    triangle area;
    area.set();
    cout << "area of triangle :" << area.get();
}
/*
enter l :10
enter b :20
area of triangle :100
*/