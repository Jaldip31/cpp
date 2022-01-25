#include <iostream>
using namespace std;
class car
{
    //access specifier
private:
public: //by default
    string brand;
};
int main()
{
    car kwid;
    kwid.brand = "renault";
    cout << kwid.brand;
}
/*
renault
*/