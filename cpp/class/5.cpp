/*
#include <iostream>
using namespace std;
class simpale_intrest
{
    int p, n;
    float r;

    public:
    void enter_data()
    {
        cout << "enter principal :";
        cin >> p;
        cout << "enter intrest rate:";
        cin >> r;
        cout << "enter year :";
        cin >> n;
    }
    int get_data()
    {
        return (p * r * n) / 100;
    }
};
int main()
{
    simpale_intrest si1;
    si1.enter_data();
    cout << "your simple intrest is : " << si1.get_data();
}
*/
/*
enter principal :1000
enter intrest rate:10
enter year :5
your simple intrest is : 500
*/
#include <iostream>
using namespace std;
class simpale_intrest
{
    int p, n;
    float r;

    public:
    void enter_data(int a,int b,int c)
    {
        p=a;
        r=b;
        n=c;
        cout << "enter principal :";
        cin >> p;
        cout << "enter intrest rate:";
        cin >> r;
        cout << "enter year :";
        cin >> n;
    }
    int get_data()
    {
        return (p * r * n) / 100;
    }
};
int main()
{
    simpale_intrest si1;
    si1.enter_data(1000,10,5);
    cout << "your simple intrest is : " << si1.get_data();
}