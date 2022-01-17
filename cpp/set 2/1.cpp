#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a: ";
    cin >> a;
    cout << "\nenter b: ";
    cin >> b;

    if (a < b)
    {
        cout << "\n a : " << a << "\tsmallest then b :" << b;
        cout << "\n answer : " << a;
    }
    else
    {
        cout << "\n b : " << b << "\tsmallest then a :" << a;
        cout << "\n answer : " << b;
    }
}
/*
enter a: 10

enter b: 20

 a : 10 smallest then b :20
 answer : 10
 */