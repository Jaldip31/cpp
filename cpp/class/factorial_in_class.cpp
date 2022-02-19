#include<iostream>
using namespace std;
class factorial
{
public:
    int fact(int);
};

int factorial :: fact(int n) 
{
    if(n<1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
        factorial obj;
        cout<<obj.fact(5);
}