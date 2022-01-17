#include<iostream>
using namespace std;
class factorial
{
    public:
    int fact(int x);

};

int factorial :: fact(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
}

int main()
{
    factorial obj;
    cout<<obj.fact(5);
}